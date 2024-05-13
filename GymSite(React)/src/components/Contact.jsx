import React from "react";
import Button from "../layouts/Button";

const Contact = () => {
  return (
    <div className="min-h-screen flex flex-col items-center justify-center md:mx-32 mx-5 mt-10">
      <div className="flex flex-col md:flex-row justify-between w-full">
        <form className="w-full md:w-2/5 space-y-5 pt-20">
          <h1 className="text-5xl font-semibold text-center">Contact Us</h1>
          <div className="flex flex-col">
            <label htmlFor="userName">Your Name</label>
            <input
              className="py-3 px-5 rounded-lg hover:shadow-md transition-all bg-gray-100 text-gray-800 focus:outline-none focus:ring-2 focus:ring-brightRed"
              type="text"
              name="userName"
              id="userName"
              placeholder="Enter your Name"
            />
          </div>
          <div className="flex flex-col">
            <label htmlFor="userEmail">Your Email</label>
            <input
              className="py-3 px-5 rounded-lg hover:shadow-md transition-all bg-gray-100 text-gray-800 focus:outline-none focus:ring-2 focus:ring-brightRed"
              type="email"
              name="userEmail"
              id="userEmail"
              placeholder="Enter your Email"
            />
          </div>
          <div className="flex flex-col">
            <label htmlFor="userNumber">Your Number</label>
            <input
              className="py-3 px-5 rounded-lg hover:shadow-md transition-all bg-gray-100 text-gray-800 focus:outline-none focus:ring-2 focus:ring-brightRed"
              type="number"
              name="userNumber"
              id="userNumber"
              placeholder="Enter your Number"
            />
          </div>
          <div className="flex flex-col">
            <label htmlFor="userMessage">Your Message</label>
            <textarea
              className="py-3 px-5 rounded-lg hover:shadow-md transition-all bg-gray-100 text-gray-800 focus:outline-none focus:ring-2 focus:ring-brightRed"
              name="userMessage"
              id="userMessage"
              rows="4"
              placeholder="Enter your Message"
            ></textarea>
          </div>
          <div className="flex flex-row justify-center space-x-4">
            <Button title="Send Message" />
            <Button title="Start a call" href="tel:+92" />
          </div>
        </form>
        <div className="flex flex-row items-center w-full md:w-2/4 my-5">
          <iframe
            title="Location"
            src="https://www.google.com/maps/embed?pb=!1m17!1m12!1m3!1d2476.092452347976!2d77.07661420593084!3d28.63804712613539!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m2!1m1!2zMjjCsDM4JzIwLjUiTiA3N8KwMDQnMzcuNiJF!5e0!3m2!1sen!2sin!4v1713182454885!5m2!1sen!2sin"
            width="500"
            height="450"
            style={{ border: 0 }}
            allowFullScreen=""
            loading="lazy"
          ></iframe>
        </div>
      </div>
    </div>
  );
};

export default Contact;
