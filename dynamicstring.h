#pragma once

struct DynString
{
    char *asciiz;
    size_t length; // the length of the string (as strlen would return)
};

struct DynString* DynString_create(const char* input);
void DynString_append(struct DynString* dest, const struct DynString*source);
void DynString_clear(struct DynString* dynStr);
void DynString_is_empty(const struct DynString* dynStr);
void DynString_destroy(struct DynString* dynStr);
