# C++ Templates

Overloading can be used to have mutltiple functions with the same name but different inputs.  However, instead of specifying every possible combination of function arguments, we may instead want to use templates.

There are mixed opinions around the use of templates, and they should be used with care.  Examples of good uses of templates include things like logging (i.e. logging different types of object), and certain other situations.  A disadvantage of templates is that they can cause code to get overcomplicated, and ends up very difficult to debug.