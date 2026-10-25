// from server: 74% by atomic.potato
// roc 2011-06 004aadf0  unit: RBX::Network::Player  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004aadf0
//
// 004aadf0  83ec08               sub esp, 8
// 004aadf3  53                   push ebx
// 004aadf4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004aadf8  55                   push ebp
// 004aadf9  56                   push esi
// 004aadfa  57                   push edi
// 004aadfb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004aadff  8bc7                 mov eax, edi
// 004aae01  2bc3                 sub eax, ebx
// 004aae03  83f820               cmp eax, 0x20
// 004aae06  7e62                 jle 0x4aae6a
// 004aae08  8b742424             mov esi, dword ptr [esp + 0x24]
// 004aae0c  8d642400             lea esp, [esp]
// 004aae10  85f6                 test esi, esi
// 004aae12  7e6f                 jle 0x4aae83
// 004aae14  57                   push edi
// 004aae15  8d442414             lea eax, [esp + 0x14]
// 004aae19  53                   push ebx
// 004aae1a  50                   push eax
// 004aae1b  e850c4ffff           call 0x4a7270
// 004aae20  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004aae24  8bc6                 mov eax, esi
// 004aae26  99                   cdq 
// 004aae27  2bc2                 sub eax, edx
// 004aae29  d1f8                 sar eax, 1
// 004aae2b  8bf0                 mov esi, eax
// 004aae2d  99                   cdq 
// 004aae2e  2bc2                 sub eax, edx
// 004aae30  d1f8                 sar eax, 1
// 004aae32  03f0                 add esi, eax
// 004aae34  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004aae38  8bcf                 mov ecx, edi
// 004aae3a  8bd0                 mov edx, eax
// 004aae3c  83c40c               add esp, 0xc
// 004aae3f  2bcd                 sub ecx, ebp
// 004aae41  2bd3                 sub edx, ebx
// 004aae43  3bd1                 cmp edx, ecx
// 004aae45  56                   push esi
// 004aae46  7d0b                 jge 0x4aae53
// 004aae48  50                   push eax
// 004aae49  53                   push ebx
// 004aae4a  e8a1ffffff           call 0x4aadf0
// 004aae4f  8bdd                 mov ebx, ebp
// 004aae51  eb0b                 jmp 0x4aae5e
// 004aae53  57                   push edi
// 004aae54  55                   push ebp
// 004aae55  e896ffffff           call 0x4aadf0
// 004aae5a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004aae5e  8bc7                 mov eax, edi
// 004aae60  2bc3                 sub eax, ebx
// 004aae62  83c40c               add esp, 0xc
// 004aae65  83f820               cmp eax, 0x20
// 004aae68  7fa6                 jg 0x4aae10
// 004aae6a  83f801               cmp eax, 1
// 004aae6d  7e0c                 jle 0x4aae7b
// 004aae6f  6a00                 push 0
// 004aae71  57                   push edi
// 004aae72  53                   push ebx
// 004aae73  e8a8c8ffff           call 0x4a7720
// 004aae78  83c40c               add esp, 0xc
// 004aae7b  5f                   pop edi
// 004aae7c  5e                   pop esi
// 004aae7d  5d                   pop ebp
// 004aae7e  5b                   pop ebx
// 004aae7f  83c408               add esp, 8
// 004aae82  c3                   ret 
// 004aae83  83f820               cmp eax, 0x20
// 004aae86  7ee2                 jle 0x4aae6a
// 004aae88  8bc7                 mov eax, edi
// 004aae8a  2bc3                 sub eax, ebx
// 004aae8c  83f801               cmp eax, 1
// 004aae8f  7e0e                 jle 0x4aae9f
// 004aae91  6a00                 push 0
// 004aae93  6a00                 push 0
// 004aae95  57                   push edi
// 004aae96  53                   push ebx
// 004aae97  e844c8ffff           call 0x4a76e0
// 004aae9c  83c410               add esp, 0x10
// 004aae9f  57                   push edi
// 004aaea0  53                   push ebx
// 004aaea1  e80ae7ffff           call 0x4a95b0
// 004aaea6  83c408               add esp, 8
// 004aaea9  5f                   pop edi
// 004aaeaa  5e                   pop esi
// 004aaeab  5d                   pop ebp
// 004aaeac  5b                   pop ebx
// 004aaead  83c408               add esp, 8
// 004aaeb0  c3                   ret 

extern "C" void __cdecl sub_004a7270(int*, int, int);
extern "C" void __cdecl sub_004a76e0(int, int, int, int);
extern "C" void __cdecl sub_004a7720(int, int, int);
extern "C" void __cdecl sub_004a95b0(int, int);
void __cdecl sub_004aadf0(int, int, int);

void __cdecl sub_004aadf0(int a, int b, int c)
{
    int lo = a;
    int hi = b;
    int n = c;
    while (hi - lo > 0x20) {
        if (n <= 0) {
            if (hi - lo > 0x20) {
                if (hi - lo > 1)
                    sub_004a76e0(0, 0, hi, lo);
                sub_004a95b0(hi, lo);
            }
            return;
        }
        int tmp;
        sub_004a7270(&tmp, lo, hi);
        int mid = tmp;
        int half = n;
        int q = half / 2;
        half = q;
        q = half / 2;
        half += q;
        int m = half;
        if (mid - lo < hi - mid) {
            sub_004aadf0(lo, mid, m);
            lo = mid;
        } else {
            sub_004aadf0(mid, hi, m);
            hi = mid;
        }
        n = m;
    }
    if (hi - lo > 1)
        sub_004a7720(lo, hi, 0);
}
