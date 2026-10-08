// from server: 100% by colin
// roc 2007-08 004083e0  unit: RBX::VLocalScript::?$FactoryProduct::Creator  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004083e0
//
// 004083e0  8b4104               mov eax, dword ptr [ecx + 4]
// 004083e3  85c0                 test eax, eax
// 004083e5  7405                 je 0x4083ec
// 004083e7  8b11                 mov edx, dword ptr [ecx]
// 004083e9  895004               mov dword ptr [eax + 4], edx
// 004083ec  83790c00             cmp dword ptr [ecx + 0xc], 0
// 004083f0  740b                 je 0x4083fd
// 004083f2  8b4108               mov eax, dword ptr [ecx + 8]
// 004083f5  50                   push eax
// 004083f6  6a00                 push 0
// 004083f8  e83b7b2200           call 0x62ff38
// 004083fd  c3                   ret 

struct Creator {
    void* field0;
    void* field4;
    void* field8;
    int fieldC;
    void destroy();
};

extern "C" void __stdcall sub_62FF38(void*, void*);

void Creator::destroy()
{
    if (field4) {
        *(void**)((char*)field4 + 4) = field0;
    }
    if (fieldC) {
        sub_62FF38(0, field8);
    }
}
