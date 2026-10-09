// from server: 100% by colin
// roc 2007-08 0069be10  unit: CXTPPropertyGridView  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069be10
//
// 0069be10  53                   push ebx
// 0069be11  55                   push ebp
// 0069be12  56                   push esi
// 0069be13  57                   push edi
// 0069be14  8bf9                 mov edi, ecx
// 0069be16  e82344f9ff           call 0x63023e
// 0069be1b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0069be1f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0069be23  53                   push ebx
// 0069be24  55                   push ebp
// 0069be25  8bcf                 mov ecx, edi
// 0069be27  e874feffff           call 0x69bca0
// 0069be2c  8bf0                 mov esi, eax
// 0069be2e  85f6                 test esi, esi
// 0069be30  742a                 je 0x69be5c
// 0069be32  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069be36  8b06                 mov eax, dword ptr [esi]
// 0069be38  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 0069be3e  53                   push ebx
// 0069be3f  55                   push ebp
// 0069be40  51                   push ecx
// 0069be41  8bce                 mov ecx, esi
// 0069be43  ffd2                 call edx
// 0069be45  53                   push ebx
// 0069be46  55                   push ebp
// 0069be47  8bcf                 mov ecx, edi
// 0069be49  e852feffff           call 0x69bca0
// 0069be4e  3bf0                 cmp esi, eax
// 0069be50  750a                 jne 0x69be5c
// 0069be52  56                   push esi
// 0069be53  6a09                 push 9
// 0069be55  8bcf                 mov ecx, edi
// 0069be57  e894ecffff           call 0x69aaf0
// 0069be5c  5f                   pop edi
// 0069be5d  5e                   pop esi
// 0069be5e  5d                   pop ebp
// 0069be5f  5b                   pop ebx
// 0069be60  c20c00               ret 0xc

struct CXTPPropertyGridView
{
    void sub_63023e();
    void* sub_69bca0(int, int);
    void sub_69aaf0(int, void*);
    void sub_69be10(int, int, int);
};

void CXTPPropertyGridView::sub_69be10(int a1, int a2, int a3)
{
    sub_63023e();
    void* p = sub_69bca0(a2, a3);
    if (p != 0)
    {
        (*(void (__thiscall**)(void*, int, int, int))(*(int*)p + 0xbc))(p, a1, a2, a3);
        if (p == sub_69bca0(a2, a3))
        {
            sub_69aaf0(9, p);
        }
    }
}
