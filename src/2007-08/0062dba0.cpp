// from server: 97% by colin
// roc 2007-08 0062dba0  unit: RBX::AdornG3D  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062dba0
//
// 0062dba0  56                   push esi
// 0062dba1  8bf1                 mov esi, ecx
// 0062dba3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062dba7  8b06                 mov eax, dword ptr [esi]
// 0062dba9  8b5038               mov edx, dword ptr [eax + 0x38]
// 0062dbac  51                   push ecx
// 0062dbad  8bce                 mov ecx, esi
// 0062dbaf  ffd2                 call edx
// 0062dbb1  8b4604               mov eax, dword ptr [esi + 4]
// 0062dbb4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062dbb8  50                   push eax
// 0062dbb9  51                   push ecx
// 0062dbba  e8211b0000           call 0x62f6e0
// 0062dbbf  83c408               add esp, 8
// 0062dbc2  5e                   pop esi
// 0062dbc3  c20c00               ret 0xc

struct RBX_AdornG3D {
    void func_0062dba0(int, int, int);
};

extern void __cdecl sub_0062f6e0(int, int);

void RBX_AdornG3D::func_0062dba0(int a, int b, int c)
{
    (*(void (__thiscall**)(void*, int))(*(int*)this + 0x38))(this, c);
    sub_0062f6e0(a, *(int*)((char*)this + 4));
}
