// from server: 73% by colin
// roc 2007-08 0069e050  unit: CXTPPropertyGridItemBool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e050
//
// 0069e050  53                   push ebx
// 0069e051  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0069e055  56                   push esi
// 0069e056  8bf1                 mov esi, ecx
// 0069e058  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 0069e05f  57                   push edi
// 0069e060  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0069e064  7431                 je 0x69e097
// 0069e066  57                   push edi
// 0069e067  53                   push ebx
// 0069e068  e803a9ffff           call 0x698970
// 0069e06d  85c0                 test eax, eax
// 0069e06f  7426                 je 0x69e097
// 0069e071  8b06                 mov eax, dword ptr [esi]
// 0069e073  8b5058               mov edx, dword ptr [eax + 0x58]
// 0069e076  8bce                 mov ecx, esi
// 0069e078  ffd2                 call edx
// 0069e07a  85c0                 test eax, eax
// 0069e07c  7519                 jne 0x69e097
// 0069e07e  8b06                 mov eax, dword ptr [esi]
// 0069e080  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 0069e086  8bce                 mov ecx, esi
// 0069e088  ffd2                 call edx
// 0069e08a  8bce                 mov ecx, esi
// 0069e08c  e83fb5ffff           call 0x6995d0
// 0069e091  5f                   pop edi
// 0069e092  5e                   pop esi
// 0069e093  5b                   pop ebx
// 0069e094  c20c00               ret 0xc
// 0069e097  8b442410             mov eax, dword ptr [esp + 0x10]
// 0069e09b  57                   push edi
// 0069e09c  53                   push ebx
// 0069e09d  50                   push eax
// 0069e09e  8bce                 mov ecx, esi
// 0069e0a0  e8dbbdffff           call 0x699e80
// 0069e0a5  5f                   pop edi
// 0069e0a6  5e                   pop esi
// 0069e0a7  5b                   pop ebx
// 0069e0a8  c20c00               ret 0xc

struct CXTPPropertyGridItemBool
{
    char pad[0x110];
    int field_0x110;
    int method_0x58();
    int method_0xac();
    int sub_00698970(int, int);
    int sub_006995d0();
    int sub_00699e80(int, int, int);
    int func_0069e050(int, int, int);
};

int CXTPPropertyGridItemBool::func_0069e050(int a1, int a2, int a3)
{
    if (field_0x110 != 0)
    {
        if (sub_00698970(a1, a2) != 0)
        {
            if (method_0x58() == 0)
            {
                method_0xac();
                sub_006995d0();
                return 0;
            }
        }
    }
    return sub_00699e80(a3, a1, a2);
}
