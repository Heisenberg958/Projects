from django.shortcuts import render
from django.http import HttpResponse
from django.template import loader

# Create your views here.
def list_centres(request):
    template = loader.get_template('list_centres.html')
    return HttpResponse(template.render())


def add_centres(request):
    template = loader.get_template('add_centre.html')
    return HttpResponse(template.render())