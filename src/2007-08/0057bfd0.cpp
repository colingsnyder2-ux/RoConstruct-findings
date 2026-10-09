// from server: 97% by colin
// roc 2007-08 0057bfd0  unit: RBX::Workspace  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057bfd0
//
// 0057bfd0  56                   push esi
// 0057bfd1  57                   push edi
// 0057bfd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057bfd6  8b07                 mov eax, dword ptr [edi]
// 0057bfd8  6a00                 push 0
// 0057bfda  68e88e8900           push 0x898ee8
// 0057bfdf  684c1f8800           push 0x881f4c
// 0057bfe4  6a00                 push 0
// 0057bfe6  50                   push eax
// 0057bfe7  8bf1                 mov esi, ecx
// 0057bfe9  e8484d0b00           call 0x630d36
// 0057bfee  83c414               add esp, 0x14
// 0057bff1  85c0                 test eax, eax
// 0057bff3  740c                 je 0x57c001
// 0057bff5  50                   push eax
// 0057bff6  8d8e98020000         lea ecx, [esi + 0x298]
// 0057bffc  e89f130400           call 0x5bd3a0
// 0057c001  57                   push edi
// 0057c002  8bce                 mov ecx, esi
// 0057c004  e837bbfeff           call 0x567b40
// 0057c009  c644240c00           mov byte ptr [esp + 0xc], 0
// 0057c00e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057c012  50                   push eax
// 0057c013  8d8ed4020000         lea ecx, [esi + 0x2d4]
// 0057c019  e842cbfdff           call 0x558b60
// 0057c01e  5f                   pop edi
// 0057c01f  5e                   pop esi
// 0057c020  c20400               ret 4

struct T_func_0057bfd0 {
    char pad[0x298];
    char field_298[0x3c];
    char field_2d4[4];
    void m(void*);
};

struct T_5bd3a0 { void m(void*); };
struct T_567b40 { void m(void*); };
struct T_558b60 { void m(void*); };

extern "C" void* __cdecl func_630d36(void*, void*, void*, void*, void*);

void T_func_0057bfd0::m(void* arg)
{
    void* v = func_630d36(*(void**)arg, 0, (void*)0x881f4c, (void*)0x898ee8, 0);
    if (v != 0) {
        ((T_5bd3a0*)field_298)->m(v);
    }
    ((T_567b40*)this)->m(arg);
    char b = 0;
    int c = *(int*)&b;
    ((T_558b60*)field_2d4)->m((void*)c);
}
