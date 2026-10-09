// from server: 98% by colin
// roc 2007-08 00435660  unit: CMemberTreeView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00435660
//
// 00435660  56                   push esi
// 00435661  8bf1                 mov esi, ecx
// 00435663  e8f6af1f00           call 0x63065e
// 00435668  33c0                 xor eax, eax
// 0043566a  c706c4c97800         mov dword ptr [esi], 0x78c9c4
// 00435670  8986f0000000         mov dword ptr [esi + 0xf0], eax
// 00435676  8986f4000000         mov dword ptr [esi + 0xf4], eax
// 0043567c  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 00435682  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 00435688  898600010000         mov dword ptr [esi + 0x100], eax
// 0043568e  898604010000         mov dword ptr [esi + 0x104], eax
// 00435694  898608010000         mov dword ptr [esi + 0x108], eax
// 0043569a  89860c010000         mov dword ptr [esi + 0x10c], eax
// 004356a0  8bc6                 mov eax, esi
// 004356a2  5e                   pop esi
// 004356a3  c3                   ret 

struct CMemberTreeView {
    char pad[0x110];
    void construct();
};

extern "C" void __stdcall sub_0063065e();

void CMemberTreeView::construct()
{
    sub_0063065e();
    *(int*)((char*)this + 0x00) = 0x78c9c4;
    *(int*)((char*)this + 0xf0) = 0;
    *(int*)((char*)this + 0xf4) = 0;
    *(int*)((char*)this + 0xf8) = 0;
    *(int*)((char*)this + 0xfc) = 0;
    *(int*)((char*)this + 0x100) = 0;
    *(int*)((char*)this + 0x104) = 0;
    *(int*)((char*)this + 0x108) = 0;
    *(int*)((char*)this + 0x10c) = 0;
}
