// from server: 31% by colin
// roc 2008-06 004c05e0  unit: ProfiledRakPeer  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c05e0
//
// 004c05e0  0000                 add byte ptr [eax], al
// 004c05e2  eb14                 jmp 0x4c05f8
// 004c05e4  50                   push eax
// 004c05e5  ff15b0288000         call dword ptr [0x8028b0]
// 004c05eb  83c404               add esp, 4
// 004c05ee  3bc7                 cmp eax, edi
// 004c05f0  7409                 je 0x4c05fb
// 004c05f2  c700dddd0000         mov dword ptr [eax], 0xdddd
// 004c05f8  83c008               add eax, 8
// 004c05fb  33d2                 xor edx, edx
// 004c05fd  894524               mov dword ptr [ebp + 0x24], eax
// 004c0600  663b5608             cmp dx, word ptr [esi + 8]
// 004c0604  736c                 jae 0x4c0672
// 004c0606  8955e8               mov dword ptr [ebp - 0x18], edx
// 004c0609  8da42400000000       lea esp, [esp]
// 004c0610  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 004c0616  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004c0619  03c1                 add eax, ecx
// 004c061b  803800               cmp byte ptr [eax], 0
// 004c061e  7438                 je 0x4c0658
// 004c0620  8d551c               lea edx, [ebp + 0x1c]
// 004c0623  52                   push edx
// 004c0624  8d4804               lea ecx, [eax + 4]
// 004c0627  e82492feff           call 0x4a9850
// 004c062c  84c0                 test al, al
// 004c062e  7428                 je 0x4c0658
// 004c0630  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 004c0636  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004c0639  6870cb9300           push 0x93cb70
// 004c063e  8d4c0804             lea ecx, [eax + ecx + 4]
// 004c0642  e80992feff           call 0x4a9850
// 004c0647  84c0                 test al, al
// 004c0649  740d                 je 0x4c0658
// 004c064b  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004c064e  8b5524               mov edx, dword ptr [ebp + 0x24]
// 004c0651  893c82               mov dword ptr [edx + eax*4], edi
// 004c0654  40                   inc eax
// 004c0655  8945ec               mov dword ptr [ebp - 0x14], eax
// 004c0658  0fb74608             movzx eax, word ptr [esi + 8]
// 004c065c  8145e850080000       add dword ptr [ebp - 0x18], 0x850
// 004c0663  47                   inc edi
// 004c0664  3bf8                 cmp edi, eax
// 004c0666  72a8                 jb 0x4c0610
// 004c0668  837dec00             cmp dword ptr [ebp - 0x14], 0
// 004c066c  0f8567feffff         jne 0x4c04d9
// 004c0672  32c0                 xor al, al
// 004c0674  e9ba000000           jmp 0x4c0733
// 004c0679  807d2800             cmp byte ptr [ebp + 0x28], 0
// 004c067d  7412                 je 0x4c0691
// 004c067f  807df300             cmp byte ptr [ebp - 0xd], 0
// 004c0683  750c                 jne 0x4c0691
// 004c0685  8d5701               lea edx, [edi + 1]
// 004c0688  3b55ec               cmp edx, dword ptr [ebp - 0x14]
// 004c068b  7504                 jne 0x4c0691
// 004c068d  b301                 mov bl, 1
// 004c068f  eb02                 jmp 0x4c0693
// 004c0691  32db                 xor bl, bl
// 004c0693  8b4524               mov eax, dword ptr [ebp + 0x24]
// 004c0696  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 004c0699  8b962c020000         mov edx, dword ptr [esi + 0x22c]
// 004c069f  69c950080000         imul ecx, ecx, 0x850
// 004c06a5  8d0411               lea eax, [ecx + edx]
// 004c06a8  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 004c06ab  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 004c06ae  51                   push ecx
// 004c06af  8b8844080000         mov ecx, dword ptr [eax + 0x844]
// 004c06b5  52                   push edx
// 004c06b6  51                   push ecx
// 004c06b7  84db                 test bl, bl
// 004c06b9  0f94c2               sete dl
// 004c06bc  0fb6ca               movzx ecx, dl
// 004c06bf  8b5518               mov edx, dword ptr [ebp + 0x18]
// 004c06c2  51                   push ecx
// 004c06c3  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004c06c6  52                   push edx
// 004c06c7  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004c06ca  51                   push ecx
// 004c06cb  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004c06ce  52                   push edx
// 004c06cf  8b5508               mov edx, dword ptr [ebp + 8]
// 004c06d2  51                   push ecx
// 004c06d3  52                   push edx
// 004c06d4  8d4818               lea ecx, [eax + 0x18]
// 004c06d7  e8640a0100           call 0x4d1140
// 004c06dc  84db                 test bl, bl
// 004c06de  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 004c06e1  7404                 je 0x4c06e7
// 004c06e3  c645f301             mov byte ptr [ebp - 0xd], 1
// 004c06e7  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004c06ea  83f802               cmp eax, 2
// 004c06ed  740a                 je 0x4c06f9
// 004c06ef  83f803               cmp eax, 3
// 004c06f2  7405                 je 0x4c06f9
// 004c06f4  83f804               cmp eax, 4
// 004c06f7  752d                 jne 0x4c0726
// 004c06f9  8b4530               mov eax, dword ptr [ebp + 0x30]
// 004c06fc  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 004c06ff  6a00                 push 0
// 004c0701  68e8030000           push 0x3e8
// 004c0706  50                   push eax
// 004c0707  51                   push ecx
// 004c0708  e823151e00           call 0x6a1c30
// 004c070d  8b5524               mov edx, dword ptr [ebp + 0x24]
// 004c0710  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 004c0713  8b962c020000         mov edx, dword ptr [esi + 0x22c]
// 004c0719  69c950080000         imul ecx, ecx, 0x850
// 004c071f  89841118080000       mov dword ptr [ecx + edx + 0x818], eax
// 004c0726  47                   inc edi
// 004c0727  3b7dec               cmp edi, dword ptr [ebp - 0x14]
// 004c072a  0f82b4fdffff         jb 0x4c04e4
// 004c0730  8a45f3               mov al, byte ptr [ebp - 0xd]
// 004c0733  8da5c4feffff         lea esp, [ebp - 0x13c]
// 004c0739  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004c073c  64890d00000000       mov dword ptr fs:[0], ecx
// 004c0743  5f                   pop edi
// 004c0744  5e                   pop esi
// 004c0745  5b                   pop ebx
// 004c0746  8be5                 mov esp, ebp
// 004c0748  5d                   pop ebp
// 004c0749  c22c00               ret 0x2c

struct S_func_004c05e0 {
    char pad0[8];
    unsigned short m_count;
    char pad1[0x22c - 0xa];
    char* m_array;
    char pad2[0x850 - 0x230];
    int f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
};

struct S_item {
    char pad0[4];
    int m_id;
    unsigned short m_type;
};

struct S_entry {
    char pad0[0x18];
    char m_data[0x850 - 0x18];
};

extern "C" void* __cdecl malloc(unsigned int size);
extern "C" int __fastcall sub_004a9850(S_item* a, S_item* b);
extern "C" int __fastcall sub_004d1140(void* a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k);
extern "C" int __cdecl sub_006a1c30(int a, int b, int c, int d);

int S_func_004c05e0::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int* arr;
    int i;
    int j;
    int count;
    char found;
    char flag;
    int idx;
    int result;

    arr = (int*)malloc(m_count * 4 + 8);
    if (arr != 0) {
        arr[0] = 0xdddd;
    }
    arr = (int*)((char*)arr + 8);

    count = 0;
    for (i = 0; i < (int)m_count; i++) {
        char* entry = m_array + i * 0x850;
        if (entry[0] != 0) {
            if (sub_004a9850((S_item*)(entry + 4), (S_item*)((char*)this + 0x1c))) {
                if (sub_004a9850((S_item*)(entry + 4), (S_item*)0x93cb70)) {
                    arr[count] = i;
                    count++;
                }
            }
        }
    }

    if (count == 0) {
        return 0;
    }

    found = 0;
    for (j = 0; j < count; j++) {
        int eidx = arr[j];
        char* entry = m_array + eidx * 0x850;
        flag = 0;
        if (a11 != 0 && found == 0 && j + 1 == count) {
            flag = 1;
        }
        sub_004d1140(entry + 0x18, a1, a2, a3, a4, a5, a6, a7, a8, a9, flag == 0);
        if (flag) {
            found = 1;
        }
        if (a5 == 2 || a5 == 3 || a5 == 4) {
            result = sub_006a1c30(a9, a10, 1000, 0);
            *(int*)(m_array + eidx * 0x850 + 0x818) = result;
        }
    }

    return found;
}
