// from server: 46% by colin
// roc 2007-08 0057d830  unit: RBX::Workspace  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057d830
//
// 0057d830  f8                   clc 
// 0057d831  ff508d               call dword ptr [eax - 0x73]
// 0057d834  4c                   dec esp
// 0057d835  245c                 and al, 0x5c
// 0057d837  e894bdf8ff           call 0x5095d0
// 0057d83c  d9442410             fld dword ptr [esp + 0x10]
// 0057d840  8b16                 mov edx, dword ptr [esi]
// 0057d842  d95c247c             fstp dword ptr [esp + 0x7c]
// 0057d846  d9442414             fld dword ptr [esp + 0x14]
// 0057d84a  8b4204               mov eax, dword ptr [edx + 4]
// 0057d84d  d99c2480000000       fstp dword ptr [esp + 0x80]
// 0057d854  8d4c2458             lea ecx, [esp + 0x58]
// 0057d858  d9442418             fld dword ptr [esp + 0x18]
// 0057d85c  51                   push ecx
// 0057d85d  8bce                 mov ecx, esi
// 0057d85f  d99c2488000000       fstp dword ptr [esp + 0x88]
// 0057d866  ffd0                 call eax
// 0057d868  8bc8                 mov ecx, eax
// 0057d86a  e881df0100           call 0x59b7f0
// 0057d86f  5b                   pop ebx
// 0057d870  5f                   pop edi
// 0057d871  5e                   pop esi
// 0057d872  83c47c               add esp, 0x7c
// 0057d875  c20c00               ret 0xc

struct RBX_Workspace {
    void drawAdornments(float, float, float);
};

extern "C" void __stdcall sub_5095D0();
extern "C" void __stdcall sub_59B7F0();

void RBX_Workspace::drawAdornments(float x, float y, float z)
{
    float local[3];
    local[0] = x;
    local[1] = y;
    local[2] = z;
    sub_5095D0();
    void (__thiscall *fn)(void*, void*) = *(void (__thiscall **)(void*, void*))((*(char**)this) + 4);
    fn(this, local);
    sub_59B7F0();
}
