// from server: 77% by atomic.potato
// roc 2009-06 0048b9d0  unit: Ogre::RbxManualTextureLoader  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048b9d0

struct Elem {
    char pad[0x1c];
    int field1c;
};

struct String {
    char pad[0x1c];
    int field1c;
};

struct Loader {
};

extern "C" void __fastcall assign_string(String* dst, const String* src);

Elem* __cdecl copy_range(Elem* first, Elem* last, Elem* dest) {
    if (first != last) {
        last = (Elem*)((char*)last - 0x20);
        dest = (Elem*)((char*)dest - 0x20);
        do {
            assign_string((String*)dest, (const String*)last);
            dest->field1c = last->field1c;
            last = (Elem*)((char*)last - 0x20);
        } while (last != first);
    }
    return dest;
}
