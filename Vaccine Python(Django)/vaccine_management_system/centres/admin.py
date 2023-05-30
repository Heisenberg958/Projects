from django.contrib import admin
from .models import Centre
# Register your models here.

class CentreAdmin(admin.ModelAdmin):
  list_display =[field.name for field in Centre._meta.get_fields()]


admin.site.register(Centre,CentreAdmin)