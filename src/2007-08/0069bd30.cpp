// from server: 94% by colin
// roc 2007-08 0069bd30  unit: CXTPPropertyGridView  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069bd30
//
// 0069bd30  53                   push ebx
// 0069bd31  56                   push esi
// 0069bd32  8bf1                 mov esi, ecx
// 0069bd34  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0069bd3b  57                   push edi
// 0069bd3c  7410                 je 0x69bd4e
// 0069bd3e  ff153cec7700         call dword ptr [0x77ec3c]
// 0069bd44  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 0069bd4e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0069bd52  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0069bd56  57                   push edi
// 0069bd57  53                   push ebx
// 0069bd58  8bce                 mov ecx, esi
// 0069bd5a  e841ffffff           call 0x69bca0
// 0069bd5f  85c0                 test eax, eax
// 0069bd61  7413                 je 0x69bd76
// 0069bd63  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069bd67  8b10                 mov edx, dword ptr [eax]
// 0069bd69  8b92c4000000         mov edx, dword ptr [edx + 0xc4]
// 0069bd6f  57                   push edi
// 0069bd70  53                   push ebx
// 0069bd71  51                   push ecx
// 0069bd72  8bc8                 mov ecx, eax
// 0069bd74  ffd2                 call edx
// 0069bd76  8bce                 mov ecx, esi
// 0069bd78  e8c144f9ff           call 0x63023e
// 0069bd7d  5f                   pop edi
// 0069bd7e  5e                   pop esi
// 0069bd7f  5b                   pop ebx
// 0069bd80  c20c00               ret 0xc

struct CXTPPropertyGridView {
    char pad[0xb4];
    int field_b4;
    int sub_69bca0(int, int);
    void sub_63023e();
    void Method(int, int, int);
};

extern "C" int __stdcall ReleaseCapture();

void CXTPPropertyGridView::Method(int a, int b, int c)
{
    if (field_b4 != 0) {
        ReleaseCapture();
        field_b4 = 0;
    }
    int result = sub_69bca0(b, c);
    if (result != 0) {
        typedef void (__thiscall *Fn)(void*, int, int, int);
        Fn fn = *(Fn*)(*(int*)result + 0xc4);
        fn((void*)result, a, b, c);
    }
    sub_63023e();
}
