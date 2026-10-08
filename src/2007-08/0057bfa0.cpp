// from server: 87% by colin
// roc 2007-08 0057bfa0  unit: RBX::Workspace  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057bfa0
//
// 0057bfa0  8b442408             mov eax, dword ptr [esp + 8]
// 0057bfa4  56                   push esi
// 0057bfa5  8bf1                 mov esi, ecx
// 0057bfa7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057bfab  50                   push eax
// 0057bfac  51                   push ecx
// 0057bfad  8bce                 mov ecx, esi
// 0057bfaf  e8ec22fcff           call 0x53e2a0
// 0057bfb4  c644240c00           mov byte ptr [esp + 0xc], 0
// 0057bfb9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057bfbd  52                   push edx
// 0057bfbe  8d8ed4020000         lea ecx, [esi + 0x2d4]
// 0057bfc4  e897cbfdff           call 0x558b60
// 0057bfc9  5e                   pop esi
// 0057bfca  c20800               ret 8

struct Workspace
{
    void sub_0057BFA0(int, int);
};

extern "C" void __stdcall sub_0053E2A0(int, int);
extern "C" void __stdcall sub_00558B60(void*, int);

void Workspace::sub_0057BFA0(int a, int b)
{
    sub_0053E2A0(a, b);
    char zero = 0;
    sub_00558B60((char*)this + 0x2d4, *(int*)&zero);
}
