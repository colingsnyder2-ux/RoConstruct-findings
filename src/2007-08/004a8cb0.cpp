// from server: 48% by colin
// roc 2007-08 004a8cb0  size: 31 bytes

struct Name;

struct FactoryProduct {
    void construct(Name* result, const char* className);
};

extern "C" Name* __cdecl Name_declare(const char* s);
extern "C" void __cdecl registerProduct(Name* name, void* product);

void FactoryProduct::construct(Name* result, const char* className)
{
    Name* n = Name_declare(className);
    registerProduct(n, result);
}
