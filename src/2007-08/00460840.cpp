// from server: 59% by colin
// roc 2007-08 00460840  unit: CScriptDoc  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460840
//
// 00460840  51                   push ecx
// 00460841  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00460845  56                   push esi
// 00460846  33f6                 xor esi, esi
// 00460848  3bc6                 cmp eax, esi
// 0046084a  89742404             mov dword ptr [esp + 4], esi
// 0046084e  750c                 jne 0x46085c
// 00460850  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00460854  8930                 mov dword ptr [eax], esi
// 00460856  897004               mov dword ptr [eax + 4], esi
// 00460859  5e                   pop esi
// 0046085a  59                   pop ecx
// 0046085b  c3                   ret 
// 0046085c  8b88bc000000         mov ecx, dword ptr [eax + 0xbc]
// 00460862  3bce                 cmp ecx, esi
// 00460864  7405                 je 0x46086b
// 00460866  e8759cfcff           call 0x42a4e0
// 0046086b  56                   push esi
// 0046086c  68a0658800           push 0x8865a0
// 00460871  684c1f8800           push 0x881f4c
// 00460876  56                   push esi
// 00460877  50                   push eax
// 00460878  e8b9041d00           call 0x630d36
// 0046087d  83c414               add esp, 0x14
// 00460880  3bc6                 cmp eax, esi
// 00460882  74cc                 je 0x460850
// 00460884  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00460888  56                   push esi
// 00460889  8bc8                 mov ecx, eax
// 0046088b  e860fdffff           call 0x4605f0
// 00460890  8bc6                 mov eax, esi
// 00460892  5e                   pop esi
// 00460893  59                   pop ecx
// 00460894  c3                   ret 

struct CScriptDoc
{
    char pad[0xbc];
    void* field_bc;
};

extern "C" void __stdcall sub_42A4E0(void*);
extern "C" void* __cdecl sub_630D36(void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_4605F0(void*, void*);

void* CScriptDoc_460840(CScriptDoc* self, void** out)
{
    if (self != 0)
    {
        out[0] = 0;
        out[1] = 0;
        return 0;
    }
    if (self->field_bc != 0)
    {
        sub_42A4E0(self->field_bc);
    }
    void* p = sub_630D36(self, (void*)0x881F4C, (void*)0x8865A0, 0, 0);
    if (p == 0)
    {
        out[0] = 0;
        out[1] = 0;
        return 0;
    }
    sub_4605F0(p, out);
    return out;
}
