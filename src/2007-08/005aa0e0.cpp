// from server: 56% by colin
// roc 2007-08 005aa0e0  unit: RBX::VHumanoid::?$SignalDesc  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aa0e0
//
// 005aa0e0  56                   push esi
// 005aa0e1  8bf1                 mov esi, ecx
// 005aa0e3  c70680587b00         mov dword ptr [esi], 0x7b5880
// 005aa0e9  8b4608               mov eax, dword ptr [esi + 8]
// 005aa0ec  85c0                 test eax, eax
// 005aa0ee  7409                 je 0x5aa0f9
// 005aa0f0  50                   push eax
// 005aa0f1  e86c5b0800           call 0x62fc62
// 005aa0f6  83c404               add esp, 4
// 005aa0f9  c7460800000000       mov dword ptr [esi + 8], 0
// 005aa100  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005aa107  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005aa10e  5e                   pop esi
// 005aa10f  c3                   ret 
// 005aa110  56                   push esi
// 005aa111  8bf1                 mov esi, ecx
// 005aa113  c70690587b00         mov dword ptr [esi], 0x7b5890
// 005aa119  8b4608               mov eax, dword ptr [esi + 8]
// 005aa11c  85c0                 test eax, eax
// 005aa11e  7409                 je 0x5aa129
// 005aa120  50                   push eax
// 005aa121  e83c5b0800           call 0x62fc62
// 005aa126  83c404               add esp, 4
// 005aa129  c7460800000000       mov dword ptr [esi + 8], 0
// 005aa130  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005aa137  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005aa13e  5e                   pop esi
// 005aa13f  c3                   ret 

struct SignalDesc {
    void* vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;
    void destroy();
};

void __cdecl free_ptr(void* p);

void SignalDesc::destroy()
{
    this->vtable = (void*)0x7b5880;
    if (this->field_8) {
        free_ptr(this->field_8);
    }
    this->field_8 = 0;
    this->field_c = 0;
    this->field_10 = 0;
}
