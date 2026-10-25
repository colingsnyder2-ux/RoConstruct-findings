// from server: 100% by king_originala
// roc 2008-06 0042ec10  unit: CWrapperView  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ec10
//
// 0042ec10  8b442408             mov eax, dword ptr [esp + 8]
// 0042ec14  83ec10               sub esp, 0x10
// 0042ec17  53                   push ebx
// 0042ec18  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0042ec1c  55                   push ebp
// 0042ec1d  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0042ec21  56                   push esi
// 0042ec22  57                   push edi
// 0042ec23  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0042ec27  55                   push ebp
// 0042ec28  57                   push edi
// 0042ec29  50                   push eax
// 0042ec2a  53                   push ebx
// 0042ec2b  8bf1                 mov esi, ecx
// 0042ec2d  e8ce1b2700           call 0x6a0800
// 0042ec32  33d2                 xor edx, edx
// 0042ec34  3bc2                 cmp eax, edx
// 0042ec36  7409                 je 0x42ec41
// 0042ec38  395500               cmp dword ptr [ebp], edx
// 0042ec3b  0f858f000000         jne 0x42ecd0
// 0042ec41  8bcb                 mov ecx, ebx
// 0042ec43  83e901               sub ecx, 1
// 0042ec46  7433                 je 0x42ec7b
// 0042ec48  83e904               sub ecx, 4
// 0042ec4b  0f8584000000         jne 0x42ecd5
// 0042ec51  395678               cmp dword ptr [esi + 0x78], edx
// 0042ec54  747a                 je 0x42ecd0
// 0042ec56  6a01                 push 1
// 0042ec58  8bcf                 mov ecx, edi
// 0042ec5a  c1e910               shr ecx, 0x10
// 0042ec5d  51                   push ecx
// 0042ec5e  0fb7c7               movzx eax, di
// 0042ec61  50                   push eax
// 0042ec62  52                   push edx
// 0042ec63  52                   push edx
// 0042ec64  8d4e58               lea ecx, [esi + 0x58]
// 0042ec67  e8e01d2700           call 0x6a0a4c
// 0042ec6c  5f                   pop edi
// 0042ec6d  5e                   pop esi
// 0042ec6e  5d                   pop ebp
// 0042ec6f  b801000000           mov eax, 1
// 0042ec74  5b                   pop ebx
// 0042ec75  83c410               add esp, 0x10
// 0042ec78  c21000               ret 0x10
// 0042ec7b  52                   push edx
// 0042ec7c  56                   push esi
// 0042ec7d  8d4c2418             lea ecx, [esp + 0x18]
// 0042ec81  51                   push ecx
// 0042ec82  b864000000           mov eax, 0x64
// 0042ec87  8d7e58               lea edi, [esi + 0x58]
// 0042ec8a  6800000056           push 0x56000000
// 0042ec8f  8bcf                 mov ecx, edi
// 0042ec91  89542420             mov dword ptr [esp + 0x20], edx
// 0042ec95  89542424             mov dword ptr [esp + 0x24], edx
// 0042ec99  89442428             mov dword ptr [esp + 0x28], eax
// 0042ec9d  8944242c             mov dword ptr [esp + 0x2c], eax
// 0042eca1  e80a232700           call 0x6a0fb0
// 0042eca6  85c0                 test eax, eax
// 0042eca8  7516                 jne 0x42ecc0
// 0042ecaa  5f                   pop edi
// 0042ecab  5e                   pop esi
// 0042ecac  c74500ffffffff       mov dword ptr [ebp], 0xffffffff
// 0042ecb3  5d                   pop ebp
// 0042ecb4  b801000000           mov eax, 1
// 0042ecb9  5b                   pop ebx
// 0042ecba  83c410               add esp, 0x10
// 0042ecbd  c21000               ret 0x10
// 0042ecc0  6a20                 push 0x20
// 0042ecc2  6800020000           push 0x200
// 0042ecc7  6a00                 push 0
// 0042ecc9  8bcf                 mov ecx, edi
// 0042eccb  e8681f2700           call 0x6a0c38
// 0042ecd0  b801000000           mov eax, 1
// 0042ecd5  5f                   pop edi
// 0042ecd6  5e                   pop esi
// 0042ecd7  5d                   pop ebp
// 0042ecd8  5b                   pop ebx
// 0042ecd9  83c410               add esp, 0x10
// 0042ecdc  c21000               ret 0x10

struct Rect {
    int left;
    int top;
    int right;
    int bottom;
};

struct Child {
    char pad[0x20];
    int handle;

    void sub_6a0a4c(int, int, int, int, int);
    int sub_6a0fb0(unsigned int, const Rect *, void *, unsigned int);
    void sub_6a0c38(unsigned int, unsigned int, unsigned int);
};

struct CWrapperView {
    char pad[0x58];
    Child child;

    int sub_6a0800(unsigned int, unsigned int, unsigned int, int *);
    int func_42ec10(unsigned int, unsigned int, unsigned int, int *);
};

int CWrapperView::func_42ec10(unsigned int message, unsigned int wparam,
                            unsigned int lparam, int *result)
{
    int handled = sub_6a0800(message, wparam, lparam, result);
    if (handled && *result)
        return 1;

    switch (message) {
    case 1:
        {
            Rect rect = { 0, 0, 100, 100 };
            if (!child.sub_6a0fb0(0x56000000, &rect, this, 0)) {
                *result = -1;
                return 1;
            }
            child.sub_6a0c38(0, 0x200, 0x20);
        }
        return 1;

    case 5:
        if (child.handle)
            child.sub_6a0a4c(0, 0, (unsigned short)lparam, lparam >> 16, 1);
        return 1;
    }
    return handled;
}
