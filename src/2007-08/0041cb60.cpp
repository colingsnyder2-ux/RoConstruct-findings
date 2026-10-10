// from server: 8% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Object;

struct CreatorList {
    void* pad0;
    void* begin;
    void* end;
};

struct CreatorsMap {
    void* pad0;
    CreatorList* list;
};

struct Object {
    void* vtable;
    void* pad4;
    void* pad8;
    void* padC;
    void* pad10;
    void* pad14;
    void* pad18;
    void* pad1C;
    void* pad20;
    void* pad24;
    void* pad28;
    void* pad2C;
    void* pad30;
    void* pad34;
    void* pad38;
    void* pad3C;
    void* pad40;
    void* pad44;
    void* pad48;
    void* pad4C;
    void* pad50;
    void* pad54;
    void* pad58;
    void* pad5C;
    void* pad60;
    void* pad64;
    void* pad68;
    void* pad6C;
    void* pad70;
    void* pad74;
    void* pad78;
    void* pad7C;
    void* pad80;
    void* pad84;
    void* pad88;
    void* pad8C;
    void* pad90;
    void* pad94;
    void* pad98;
    void* pad9C;
    void* padA0;
    void* padA4;
    void* padA8;
    void* padAC;
    void* padB0;
    void* padB4;
    void* padB8;
    void* padBC;
    void* padC0;
    void* padC4;
    void* padC8;
    void* padCC;
    void* padD0;
    void* padD4;
    void* padD8;
    void* padDC;
    void* padE0;
    void* padE4;
    void* padE8;
    void* padEC;
    void* padF0;
    void* padF4;
    void* padF8;
    void* padFC;
    CreatorsMap* creators;
};

struct RefCounted {
    void* vtable;
    volatile long refCount;
    volatile long weakCount;
};

struct SharedPtr {
    RefCounted* ptr;
};

struct Creator {
    Object* getObject();
    SharedPtr getShared();
};

struct FactoryProduct {
    Object* base;
    Creator* creator;
    Object* getObject();
    SharedPtr getShared();
};

extern "C" void* __cdecl sub_630D36(void*, void*, void*, void*, void*);

Object* Creator::getObject()
{
    return 0;
}

SharedPtr Creator::getShared()
{
    SharedPtr result;
    result.ptr = 0;
    return result;
}

Object* FactoryProduct::getObject()
{
    Object* obj = 0;
    if (creator) {
        obj = creator->getObject();
    }
    return obj;
}

SharedPtr FactoryProduct::getShared()
{
    SharedPtr result;
    result.ptr = 0;
    return result;
}
