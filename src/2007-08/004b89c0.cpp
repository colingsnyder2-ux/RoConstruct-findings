// from server: 62% by atomic.potato
// roc 2007-08 004b89c0  unit: RakPeer  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b89c0
//
// 004b89c0  83b92c02000000       cmp dword ptr [ecx + 0x22c], 0
// 004b89c7  0f84bd000000         je 0x4b8a8a
// 004b89cd  8a4104               mov al, byte ptr [ecx + 4]
// 004b89d0  3c01                 cmp al, 1
// 004b89d2  0f84b2000000         je 0x4b8a8a
// 004b89d8  53                   push ebx
// 004b89d9  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004b89dd  56                   push esi
// 004b89de  33d2                 xor edx, edx
// 004b89e0  85db                 test ebx, ebx
// 004b89e2  57                   push edi
// 004b89e3  7464                 je 0x4b8a49
// 004b89e5  33ff                 xor edi, edi
// 004b89e7  66395108             cmp word ptr [ecx + 8], dx
// 004b89eb  0f868a000000         jbe 0x4b8a7b
// 004b89f1  33f6                 xor esi, esi
// 004b89f3  55                   push ebp
// 004b89f4  8b812c020000         mov eax, dword ptr [ecx + 0x22c]
// 004b89fa  03c6                 add eax, esi
// 004b89fc  803800               cmp byte ptr [eax], 0
// 004b89ff  7427                 je 0x4b8a28
// 004b8a01  83b83808000008       cmp dword ptr [eax + 0x838], 8
// 004b8a08  751e                 jne 0x4b8a28
// 004b8a0a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004b8a0e  0fb76d00             movzx ebp, word ptr [ebp]
// 004b8a12  3bd5                 cmp edx, ebp
// 004b8a14  7d0f                 jge 0x4b8a25
// 004b8a16  8b6804               mov ebp, dword ptr [eax + 4]
// 004b8a19  892cd3               mov dword ptr [ebx + edx*8], ebp
// 004b8a1c  668b4008             mov ax, word ptr [eax + 8]
// 004b8a20  668944d304           mov word ptr [ebx + edx*8 + 4], ax
// 004b8a25  83c201               add edx, 1
// 004b8a28  0fb74108             movzx eax, word ptr [ecx + 8]
// 004b8a2c  83c701               add edi, 1
// 004b8a2f  81c640080000         add esi, 0x840
// 004b8a35  3bf8                 cmp edi, eax
// 004b8a37  7cbb                 jl 0x4b89f4
// 004b8a39  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b8a3d  5d                   pop ebp
// 004b8a3e  5f                   pop edi
// 004b8a3f  5e                   pop esi
// 004b8a40  668911               mov word ptr [ecx], dx
// 004b8a43  5b                   pop ebx
// 004b8a44  32c0                 xor al, al
// 004b8a46  c20800               ret 8
// 004b8a49  0fb74108             movzx eax, word ptr [ecx + 8]
// 004b8a4d  85c0                 test eax, eax
// 004b8a4f  7e2a                 jle 0x4b8a7b
// 004b8a51  8b892c020000         mov ecx, dword ptr [ecx + 0x22c]
// 004b8a57  be08000000           mov esi, 8
// 004b8a5c  8d642400             lea esp, [esp]
// 004b8a60  803900               cmp byte ptr [ecx], 0
// 004b8a63  740b                 je 0x4b8a70
// 004b8a65  39b138080000         cmp dword ptr [ecx + 0x838], esi
// 004b8a6b  7503                 jne 0x4b8a70
// 004b8a6d  83c201               add edx, 1
// 004b8a70  81c140080000         add ecx, 0x840
// 004b8a76  83e801               sub eax, 1
// 004b8a79  75e5                 jne 0x4b8a60
// 004b8a7b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b8a7f  5f                   pop edi
// 004b8a80  5e                   pop esi
// 004b8a81  668911               mov word ptr [ecx], dx
// 004b8a84  5b                   pop ebx
// 004b8a85  32c0                 xor al, al
// 004b8a87  c20800               ret 8
// 004b8a8a  8b542408             mov edx, dword ptr [esp + 8]
// 004b8a8e  66c7020000           mov word ptr [edx], 0
// 004b8a93  32c0                 xor al, al
// 004b8a95  c20800               ret 8

struct RakPeer {
    char pad0[4];
    unsigned char field4;
    char pad1[3];
    unsigned short field8;
    char pad2[0x220];
    char* field22c;
    char pad3[0x608];
    unsigned int field838;

    bool getSomething(unsigned short* out, void* arr);
};

bool RakPeer::getSomething(unsigned short* out, void* arr)
{
    if (field22c == 0 || field4 == 1) {
        *out = 0;
        return false;
    }

    unsigned short count = 0;
    if (arr != 0) {
        unsigned short n = field8;
        for (int i = 0; i < (int)n; i++) {
            char* p = field22c + i * 0x840;
            if (p[0] != 0 && *(unsigned int*)(p + 0x838) == 8) {
                if ((int)count < (int)*out) {
                    *(unsigned int*)((char*)arr + count * 8) = *(unsigned int*)(p + 4);
                    *(unsigned short*)((char*)arr + count * 8 + 4) = *(unsigned short*)(p + 8);
                }
                count++;
            }
        }
    } else {
        unsigned short n = field8;
        for (int i = 0; i < (int)n; i++) {
            char* p = field22c + i * 0x840;
            if (p[0] != 0 && *(unsigned int*)(p + 0x838) == 8) {
                count++;
            }
        }
    }
    *out = count;
    return false;
}
