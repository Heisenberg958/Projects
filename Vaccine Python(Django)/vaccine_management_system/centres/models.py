from django.db import models

# Create your models here.

class Centre(models.Model):
  name = models.CharField(max_length=255)
  location = models.CharField(max_length=255)
  district = models.CharField(max_length=255)
  pin = models.IntegerField(null=True)
  Incharge = models.CharField(max_length=255)
  Incharge_phone = models.CharField(max_length=255)
  Contacts = models.CharField(max_length=255)
  created_date = models.DateField(null=True)
  ending_date = models.DateField(null=True)