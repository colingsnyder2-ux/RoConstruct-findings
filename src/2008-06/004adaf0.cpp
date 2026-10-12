// from server: 100% by king_originala
// roc 2008-06 004adaf0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004adaf0
//
// 004adaf0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004adaf4  83ec0c               sub esp, 0xc
// 004adaf7  8d0424               lea eax, [esp]
// 004adafa  50                   push eax
// 004adafb  51                   push ecx
// 004adafc  e8cf91ffff           call 0x4a6cd0
// 004adb01  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004adb05  83c408               add esp, 8
// 004adb08  83790400             cmp dword ptr [ecx + 4], 0
// 004adb0c  7409                 je 0x4adb17
// 004adb0e  8d1424               lea edx, [esp]
// 004adb11  52                   push edx
// 004adb12  e8e9f7ffff           call 0x4ad300
// 004adb17  83c40c               add esp, 0xc
// 004adb1a  c3                   ret 

struct Value {
    unsigned int words[3];
};

struct S {
    unsigned int reserved;
    unsigned int count;
    void apply(Value*);
};

extern void __cdecl prepare(void*, Value*);

void __cdecl function(S* object, void* source)
{
    Value value;
    prepare(source, &value);
    if (object->count != 0)
        object->apply(&value);
}
