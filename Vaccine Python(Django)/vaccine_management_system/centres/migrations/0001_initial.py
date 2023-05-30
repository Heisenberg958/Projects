# Generated by Django 3.2.19 on 2023-05-17 08:30

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Centre',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=255)),
                ('location', models.CharField(max_length=255)),
                ('district', models.CharField(max_length=255)),
                ('pin', models.IntegerField(null=True)),
                ('Incharge', models.CharField(max_length=255)),
                ('Incharge_phone', models.CharField(max_length=255)),
                ('Contacts', models.CharField(max_length=255)),
                ('created_date', models.DateField(null=True)),
                ('ending_date', models.DateField(null=True)),
            ],
        ),
    ]
