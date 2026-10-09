// from server: 91% by colin
// roc 2007-08 004c3db0  unit: RakPeer  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c3db0
//
// 004c3db0  8b442408             mov eax, dword ptr [esp + 8]
// 004c3db4  53                   push ebx
// 004c3db5  56                   push esi
// 004c3db6  57                   push edi
// 004c3db7  8bd9                 mov ebx, ecx
// 004c3db9  8b33                 mov esi, dword ptr [ebx]
// 004c3dbb  33ff                 xor edi, edi
// 004c3dbd  85c0                 test eax, eax
// 004c3dbf  7648                 jbe 0x4c3e09
// 004c3dc1  55                   push ebp
// 004c3dc2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004c3dc6  89442418             mov dword ptr [esp + 0x18], eax
// 004c3dca  8d9b00000000         lea ebx, [ebx]
// 004c3dd0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c3dd4  e897bbfdff           call 0x49f970
// 004c3dd9  84c0                 test al, al
// 004c3ddb  7505                 jne 0x4c3de2
// 004c3ddd  8b7608               mov esi, dword ptr [esi + 8]
// 004c3de0  eb03                 jmp 0x4c3de5
// 004c3de2  8b760c               mov esi, dword ptr [esi + 0xc]
// 004c3de5  837e0800             cmp dword ptr [esi + 8], 0
// 004c3de9  7516                 jne 0x4c3e01
// 004c3deb  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004c3def  7510                 jne 0x4c3e01
// 004c3df1  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 004c3df5  7305                 jae 0x4c3dfc
// 004c3df7  8a06                 mov al, byte ptr [esi]
// 004c3df9  88042f               mov byte ptr [edi + ebp], al
// 004c3dfc  8b33                 mov esi, dword ptr [ebx]
// 004c3dfe  83c701               add edi, 1
// 004c3e01  836c241801           sub dword ptr [esp + 0x18], 1
// 004c3e06  75c8                 jne 0x4c3dd0
// 004c3e08  5d                   pop ebp
// 004c3e09  8bc7                 mov eax, edi
// 004c3e0b  5f                   pop edi
// 004c3e0c  5e                   pop esi
// 004c3e0d  5b                   pop ebx
// 004c3e0e  c21000               ret 0x10

struct RakPeer {
    int f(unsigned int a, char* b, unsigned int c, unsigned int d);
};

extern "C" bool __fastcall sub_49F970(int);

int RakPeer::f(unsigned int a, char* b, unsigned int c, unsigned int d) {
    int* node = *(int**)this;
    unsigned int count = 0;
    if (a > 0) {
        unsigned int remaining = a;
        do {
            if (sub_49F970(d)) {
                node = *(int**)((char*)node + 0xc);
            } else {
                node = *(int**)((char*)node + 8);
            }
            if (*(int*)((char*)node + 8) == 0 && *(int*)((char*)node + 0xc) == 0) {
                if (count < c) {
                    b[count] = *(char*)node;
                }
                node = *(int**)this;
                count++;
            }
            remaining--;
        } while (remaining != 0);
    }
    return count;
}
