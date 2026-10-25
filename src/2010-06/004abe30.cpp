// from server: 39% by atomic.potato
// roc 2010-06 004abe30  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004abe30
//
// 004abe30  83ec14               sub esp, 0x14
// 004abe33  53                   push ebx
// 004abe34  55                   push ebp
// 004abe35  56                   push esi
// 004abe36  57                   push edi
// 004abe37  8be9                 mov ebp, ecx
// 004abe39  8b4508               mov eax, dword ptr [ebp + 8]
// 004abe3c  83ec0c               sub esp, 0xc
// 004abe3f  8bf4                 mov esi, esp
// 004abe41  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004abe45  89642420             mov dword ptr [esp + 0x20], esp
// 004abe49  894608               mov dword ptr [esi + 8], eax
// 004abe4c  c70600000000         mov dword ptr [esi], 0
// 004abe52  83f808               cmp eax, 8
// 004abe55  7704                 ja 0x4abe5b
// 004abe57  8bc6                 mov eax, esi
// 004abe59  eb0e                 jmp 0x4abe69
// 004abe5b  50                   push eax
// 004abe5c  e821be2f00           call 0x7a7c82
// 004abe61  8906                 mov dword ptr [esi], eax
// 004abe63  8b4d00               mov ecx, dword ptr [ebp]
// 004abe66  83c404               add esp, 4
// 004abe69  8b5608               mov edx, dword ptr [esi + 8]
// 004abe6c  52                   push edx
// 004abe6d  51                   push ecx
// 004abe6e  50                   push eax
// 004abe6f  e8b2cf2f00           call 0x7a8e26
// 004abe74  8b442450             mov eax, dword ptr [esp + 0x50]
// 004abe78  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004abe7c  8b542448             mov edx, dword ptr [esp + 0x48]
// 004abe80  83c40c               add esp, 0xc
// 004abe83  50                   push eax
// 004abe84  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004abe88  51                   push ecx
// 004abe89  52                   push edx
// 004abe8a  50                   push eax
// 004abe8b  8d4c2438             lea ecx, [esp + 0x38]
// 004abe8f  51                   push ecx
// 004abe90  e8ebf0ffff           call 0x4aaf80
// 004abe95  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 004abe99  83c420               add esp, 0x20
// 004abe9c  83fbfc               cmp ebx, -4
// 004abe9f  7410                 je 0x4abeb1
// 004abea1  85db                 test ebx, ebx
// 004abea3  7406                 je 0x4abeab
// 004abea5  3b5c2434             cmp ebx, dword ptr [esp + 0x34]
// 004abea9  7406                 je 0x4abeb1
// 004abeab  ff150ca99e00         call dword ptr [0x9ea90c]
// 004abeb1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004abeb5  8b742420             mov esi, dword ptr [esp + 0x20]
// 004abeb9  3bf1                 cmp esi, ecx
// 004abebb  751d                 jne 0x4abeda
// 004abebd  8b442428             mov eax, dword ptr [esp + 0x28]
// 004abec1  8b542434             mov edx, dword ptr [esp + 0x34]
// 004abec5  8910                 mov dword ptr [eax], edx
// 004abec7  894804               mov dword ptr [eax + 4], ecx
// 004abeca  895008               mov dword ptr [eax + 8], edx
// 004abecd  89480c               mov dword ptr [eax + 0xc], ecx
// 004abed0  5f                   pop edi
// 004abed1  5e                   pop esi
// 004abed2  5d                   pop ebp
// 004abed3  5b                   pop ebx
// 004abed4  83c414               add esp, 0x14
// 004abed7  c21400               ret 0x14
// 004abeda  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 004abede  8bfb                 mov edi, ebx
// 004abee0  897c2414             mov dword ptr [esp + 0x14], edi
// 004abee4  89742418             mov dword ptr [esp + 0x18], esi
// 004abee8  0f85d1000000         jne 0x4abfbf
// 004abeee  8bff                 mov edi, edi
// 004abef0  83fffc               cmp edi, -4
// 004abef3  7410                 je 0x4abf05
// 004abef5  85ff                 test edi, edi
// 004abef7  7406                 je 0x4abeff
// 004abef9  3b7c2434             cmp edi, dword ptr [esp + 0x34]
// 004abefd  7406                 je 0x4abf05
// 004abeff  ff150ca99e00         call dword ptr [0x9ea90c]
// 004abf05  3b742438             cmp esi, dword ptr [esp + 0x38]
// 004abf09  0f84c7000000         je 0x4abfd6
// 004abf0f  83fffc               cmp edi, -4
// 004abf12  7427                 je 0x4abf3b
// 004abf14  85ff                 test edi, edi
// 004abf16  7506                 jne 0x4abf1e
// 004abf18  ff150ca99e00         call dword ptr [0x9ea90c]
// 004abf1e  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 004abf22  7205                 jb 0x4abf29
// 004abf24  8b4704               mov eax, dword ptr [edi + 4]
// 004abf27  eb03                 jmp 0x4abf2c
// 004abf29  8d4704               lea eax, [edi + 4]
// 004abf2c  8b5714               mov edx, dword ptr [edi + 0x14]
// 004abf2f  03d0                 add edx, eax
// 004abf31  3bf2                 cmp esi, edx
// 004abf33  7206                 jb 0x4abf3b
// 004abf35  ff150ca99e00         call dword ptr [0x9ea90c]
// 004abf3b  8b4508               mov eax, dword ptr [ebp + 8]
// 004abf3e  8a1e                 mov bl, byte ptr [esi]
// 004abf40  8bf5                 mov esi, ebp
// 004abf42  83f808               cmp eax, 8
// 004abf45  7603                 jbe 0x4abf4a
// 004abf47  8b7500               mov esi, dword ptr [ebp]
// 004abf4a  8d2c30               lea ebp, [eax + esi]
// 004abf4d  8bcd                 mov ecx, ebp
// 004abf4f  2bce                 sub ecx, esi
// 004abf51  85c9                 test ecx, ecx
// 004abf53  7e1f                 jle 0x4abf74
// 004abf55  8bc1                 mov eax, ecx
// 004abf57  99                   cdq 
// 004abf58  2bc2                 sub eax, edx
// 004abf5a  d1f8                 sar eax, 1
// 004abf5c  381c30               cmp byte ptr [eax + esi], bl
// 004abf5f  7d0d                 jge 0x4abf6e
// 004abf61  83caff               or edx, 0xffffffff
// 004abf64  2bd0                 sub edx, eax
// 004abf66  8d743001             lea esi, [eax + esi + 1]
// 004abf6a  03ca                 add ecx, edx
// 004abf6c  eb02                 jmp 0x4abf70
// 004abf6e  8bc8                 mov ecx, eax
// 004abf70  85c9                 test ecx, ecx
// 004abf72  7fe1                 jg 0x4abf55
// 004abf74  3bf5                 cmp esi, ebp
// 004abf76  7456                 je 0x4abfce
// 004abf78  3a1e                 cmp bl, byte ptr [esi]
// 004abf7a  7c52                 jl 0x4abfce
// 004abf7c  83fffc               cmp edi, -4
// 004abf7f  7429                 je 0x4abfaa
// 004abf81  85ff                 test edi, edi
// 004abf83  7506                 jne 0x4abf8b
// 004abf85  ff150ca99e00         call dword ptr [0x9ea90c]
// 004abf8b  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 004abf8f  7205                 jb 0x4abf96
// 004abf91  8b4704               mov eax, dword ptr [edi + 4]
// 004abf94  eb03                 jmp 0x4abf99
// 004abf96  8d4704               lea eax, [edi + 4]
// 004abf99  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 004abf9c  03c8                 add ecx, eax
// 004abf9e  394c2418             cmp dword ptr [esp + 0x18], ecx
// 004abfa2  7206                 jb 0x4abfaa
// 004abfa4  ff150ca99e00         call dword ptr [0x9ea90c]
// 004abfaa  ff442418             inc dword ptr [esp + 0x18]
// 004abfae  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004abfb2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004abfb6  8b742418             mov esi, dword ptr [esp + 0x18]
// 004abfba  e931ffffff           jmp 0x4abef0
// 004abfbf  8d4c2414             lea ecx, [esp + 0x14]
// 004abfc3  e8887effff           call 0x4a3e50
// 004abfc8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004abfcc  eb04                 jmp 0x4abfd2
// 004abfce  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004abfd2  8b742418             mov esi, dword ptr [esp + 0x18]
// 004abfd6  8b442428             mov eax, dword ptr [esp + 0x28]
// 004abfda  8b542420             mov edx, dword ptr [esp + 0x20]
// 004abfde  897808               mov dword ptr [eax + 8], edi
// 004abfe1  5f                   pop edi
// 004abfe2  89700c               mov dword ptr [eax + 0xc], esi
// 004abfe5  5e                   pop esi
// 004abfe6  5d                   pop ebp
// 004abfe7  8918                 mov dword ptr [eax], ebx
// 004abfe9  895004               mov dword ptr [eax + 4], edx
// 004abfec  5b                   pop ebx
// 004abfed  83c414               add esp, 0x14
// 004abff0  c21400               ret 0x14

struct S {
    char pad0[8];
    int len;
    char pad1[4];
    int f(int, int, int, int, int);
};

extern "C" void __stdcall sub_7a7c82(int);
extern "C" void __stdcall sub_7a8e26(void*, void*, void*);
extern "C" void __stdcall sub_4aaf80(void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_4a3e50(void*);
extern "C" void __stdcall invalid_parameter_noinfo();

int S::f(int a1, int a2, int a3, int a4, int a5) {
    int buf[3];
    buf[0] = 0;
    buf[2] = len;
    void* p;
    if (len <= 8) {
        p = buf;
    } else {
        sub_7a7c82(len);
        buf[0] = (int)p;
        p = (void*)buf[0];
    }
    sub_7a8e26(p, (void*)buf[2], (void*)buf[0]);
    int tmp[5];
    sub_4aaf80(tmp, &a1, &a2, &a3, &a4);
    int ebx = tmp[1];
    if (ebx != -4 && ebx != 0 && ebx != tmp[5]) {
        invalid_parameter_noinfo();
    }
    int ecx = tmp[0];
    int esi = tmp[4];
    if (esi == ecx) {
        int* out = (int*)a5;
        out[0] = tmp[5];
        out[1] = ecx;
        out[2] = tmp[5];
        out[3] = ecx;
        return 0;
    }
    int edi = ebx;
    int local14 = edi;
    int local18 = esi;
    if (*(int*)((char*)this + 12) != 0) {
        sub_4a3e50(&local14);
        edi = local14;
    } else {
        while (1) {
            if (edi != -4 && edi != 0 && edi != tmp[5]) {
                invalid_parameter_noinfo();
            }
            if (esi == tmp[0]) break;
            if (edi != -4 && edi != 0) {
                if (edi == 0) invalid_parameter_noinfo();
                char* base;
                if (*(int*)((char*)edi + 0x18) >= 0x10) {
                    base = *(char**)((char*)edi + 4);
                } else {
                    base = (char*)edi + 4;
                }
                int off = *(int*)((char*)edi + 0x14);
                if (esi >= (int)(base + off)) {
                    invalid_parameter_noinfo();
                }
            }
            char bl = *(char*)esi;
            char* start;
            if (len <= 8) {
                start = (char*)this;
            } else {
                start = *(char**)this;
            }
            char* end = start + len;
            char* cur = start;
            int cnt = (int)(end - start);
            while (cnt > 0) {
                int mid = cnt / 2;
                if (start[mid] < bl) {
                    cur = start + mid + 1;
                    cnt = cnt - mid - 1;
                } else {
                    cnt = mid;
                }
            }
            if (cur == end || bl < *cur) break;
            if (edi != -4 && edi != 0) {
                if (edi == 0) invalid_parameter_noinfo();
                char* base;
                if (*(int*)((char*)edi + 0x18) >= 0x10) {
                    base = *(char**)((char*)edi + 4);
                } else {
                    base = (char*)edi + 4;
                }
                int off = *(int*)((char*)edi + 0x14);
                if (local18 >= (int)(base + off)) {
                    invalid_parameter_noinfo();
                }
            }
            local18++;
            esi = local18;
        }
    }
    int* out = (int*)a5;
    out[0] = ebx;
    out[1] = tmp[4];
    out[2] = edi;
    out[3] = esi;
    return 0;
}
