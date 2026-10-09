// from server: 40% by colin
// roc 2007-08 00534ae0  unit: G3D::VCoordinateFrame::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534ae0
//
// 00534ae0  6aff                 push -1
// 00534ae2  681bb67500           push 0x75b61b
// 00534ae7  64a100000000         mov eax, dword ptr fs:[0]
// 00534aed  50                   push eax
// 00534aee  64892500000000       mov dword ptr fs:[0], esp
// 00534af5  51                   push ecx
// 00534af6  56                   push esi
// 00534af7  6a34                 push 0x34
// 00534af9  8bf1                 mov esi, ecx
// 00534afb  e8f6b30f00           call 0x62fef6
// 00534b00  83c404               add esp, 4
// 00534b03  89442404             mov dword ptr [esp + 4], eax
// 00534b07  85c0                 test eax, eax
// 00534b09  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00534b11  741b                 je 0x534b2e
// 00534b13  83c604               add esi, 4
// 00534b16  56                   push esi
// 00534b17  8bc8                 mov ecx, eax
// 00534b19  e842ffffff           call 0x534a60
// 00534b1e  5e                   pop esi
// 00534b1f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00534b23  64890d00000000       mov dword ptr fs:[0], ecx
// 00534b2a  83c410               add esp, 0x10
// 00534b2d  c3                   ret 
// 00534b2e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00534b32  33c0                 xor eax, eax
// 00534b34  5e                   pop esi
// 00534b35  64890d00000000       mov dword ptr fs:[0], ecx
// 00534b3c  83c410               add esp, 0x10
// 00534b3f  c3                   ret 

struct VCoordinateFrame_holder {
    void construct();
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl VCoordinateFrame_ctor(void*, void*);

void VCoordinateFrame_holder::construct()
{
    void* p = operator_new(0x34);
    if (p) {
        VCoordinateFrame_ctor(p, (char*)this + 4);
    }
}
