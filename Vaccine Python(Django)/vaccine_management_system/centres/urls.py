from django.urls import path
from . import views

urlpatterns = [
    path('list/', views.list_centres,name='one'),
    path('add/', views.add_centres,name='two'),
       
]