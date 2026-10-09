// from server: 81% by colin
// roc 2007-08 00564930  unit: RBX::RedoState  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564930
//
// 00564930  a16c228c00           mov eax, dword ptr [0x8c226c]
// 00564935  56                   push esi
// 00564936  8b742408             mov esi, dword ptr [esp + 8]
// 0056493a  57                   push edi
// 0056493b  8bf9                 mov edi, ecx
// 0056493d  50                   push eax
// 0056493e  8bce                 mov ecx, esi
// 00564940  e86b8affff           call 0x55d3b0
// 00564945  85c0                 test eax, eax
// 00564947  7520                 jne 0x564969
// 00564949  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056494d  83ec08               sub esp, 8
// 00564950  8bcc                 mov ecx, esp
// 00564952  89642414             mov dword ptr [esp + 0x14], esp
// 00564956  52                   push edx
// 00564957  e8d48d0200           call 0x58d730
// 0056495c  a16c228c00           mov eax, dword ptr [0x8c226c]
// 00564961  50                   push eax
// 00564962  8bce                 mov ecx, esi
// 00564964  e8e7acfdff           call 0x53f650
// 00564969  8b4710               mov eax, dword ptr [edi + 0x10]
// 0056496c  85c0                 test eax, eax
// 0056496e  750b                 jne 0x56497b
// 00564970  89770c               mov dword ptr [edi + 0xc], esi
// 00564973  897710               mov dword ptr [edi + 0x10], esi
// 00564976  5f                   pop edi
// 00564977  5e                   pop esi
// 00564978  c20800               ret 8
// 0056497b  8930                 mov dword ptr [eax], esi
// 0056497d  897710               mov dword ptr [edi + 0x10], esi
// 00564980  5f                   pop edi
// 00564981  5e                   pop esi
// 00564982  c20800               ret 8

struct RedoState {
    char pad0[0xc];
    void* field_c;
    void* field_10;
    void method(int a, int b);
};

extern void* g_8c226c;

extern int __fastcall sub_55d3b0(void* self, int unused, void* arg);
extern void __fastcall sub_58d730(void* self, int unused, void* arg);
extern void __fastcall sub_53f650(void* self, int unused, void* arg);

void RedoState::method(int a, int b)
{
    void* p = g_8c226c;
    if (sub_55d3b0((void*)a, 0, p) == 0)
    {
        sub_58d730((void*)b, 0, (void*)a);
        sub_53f650((void*)a, 0, g_8c226c);
    }
    if (field_10 == 0)
    {
        field_c = (void*)a;
        field_10 = (void*)a;
    }
    else
    {
        *(void**)field_10 = (void*)a;
        field_10 = (void*)a;
    }
}
