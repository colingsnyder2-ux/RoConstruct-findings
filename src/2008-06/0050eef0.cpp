// from server: 44% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 42% by atomic.potato
// roc 2008-06 0050eef0  unit: seg_00500000  size: 1006 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050eef0
//
// 0050eef0  83ec34               sub esp, 0x34
// 0050eef3  53                   push ebx
// 0050eef4  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0050eef8  55                   push ebp
// 0050eef9  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0050eefd  3bdd                 cmp ebx, ebp
// 0050eeff  56                   push esi
// 0050ef00  57                   push edi
// 0050ef01  8bf5                 mov esi, ebp
// 0050ef03  7e02                 jle 0x50ef07
// 0050ef05  8bf3                 mov esi, ebx
// 0050ef07  6a00                 push 0
// 0050ef09  46                   inc esi
// 0050ef0a  c74424345c978100     mov dword ptr [esp + 0x34], 0x81975c
// 0050ef12  e8e98dffff           call 0x507d00
// 0050ef17  8bc6                 mov eax, esi
// 0050ef19  0fafc6               imul eax, esi
// 0050ef1c  03c0                 add eax, eax
// 0050ef1e  03c0                 add eax, eax
// 0050ef20  6a01                 push 1
// 0050ef22  50                   push eax
// 0050ef23  89742444             mov dword ptr [esp + 0x44], esi
// 0050ef27  89742448             mov dword ptr [esp + 0x48], esi
// 0050ef2b  c744244c04000000     mov dword ptr [esp + 0x4c], 4
// 0050ef33  e8e89bffff           call 0x508b20
// 0050ef38  89442440             mov dword ptr [esp + 0x40], eax
// 0050ef3c  8b442468             mov eax, dword ptr [esp + 0x68]
// 0050ef40  83c40c               add esp, 0xc
// 0050ef43  85c0                 test eax, eax
// 0050ef45  752a                 jne 0x50ef71
// 0050ef47  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0050ef4b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0050ef4f  53                   push ebx
// 0050ef50  55                   push ebp
// 0050ef51  51                   push ecx
// 0050ef52  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0050ef56  52                   push edx
// 0050ef57  8bc6                 mov eax, esi
// 0050ef59  2bc3                 sub eax, ebx
// 0050ef5b  50                   push eax
// 0050ef5c  6a00                 push 0
// 0050ef5e  51                   push ecx
// 0050ef5f  8d54244c             lea edx, [esp + 0x4c]
// 0050ef63  52                   push edx
// 0050ef64  e8c7e5ffff           call 0x50d530
// 0050ef69  83c420               add esp, 0x20
// 0050ef6c  e9d3000000           jmp 0x50f044
// 0050ef71  83f85a               cmp eax, 0x5a
// 0050ef74  0f8496000000         je 0x50f010
// 0050ef7a  83f8a6               cmp eax, -0x5a
// 0050ef7d  0f848d000000         je 0x50f010
// 0050ef83  3db4000000           cmp eax, 0xb4
// 0050ef88  0f85b6000000         jne 0x50f044
// 0050ef8e  8b442448             mov eax, dword ptr [esp + 0x48]
// 0050ef92  8bfe                 mov edi, esi
// 0050ef94  2bfb                 sub edi, ebx
// 0050ef96  83781004             cmp dword ptr [eax + 0x10], 4
// 0050ef9a  897c2428             mov dword ptr [esp + 0x28], edi
// 0050ef9e  0f85a0000000         jne 0x50f044
// 0050efa4  33d2                 xor edx, edx
// 0050efa6  89542410             mov dword ptr [esp + 0x10], edx
// 0050efaa  85ed                 test ebp, ebp
// 0050efac  0f8e92000000         jle 0x50f044
// 0050efb2  33c0                 xor eax, eax
// 0050efb4  85db                 test ebx, ebx
// 0050efb6  7e4d                 jle 0x50f005
// 0050efb8  8d7c1fff             lea edi, [edi + ebx - 1]
// 0050efbc  0faffe               imul edi, esi
// 0050efbf  8bce                 mov ecx, esi
// 0050efc1  f7d9                 neg ecx
// 0050efc3  03c9                 add ecx, ecx
// 0050efc5  2bfa                 sub edi, edx
// 0050efc7  8b542434             mov edx, dword ptr [esp + 0x34]
// 0050efcb  03c9                 add ecx, ecx
// 0050efcd  03fd                 add edi, ebp
// 0050efcf  8d54bafc             lea edx, [edx + edi*4 - 4]
// 0050efd3  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0050efd7  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0050efdb  03f8                 add edi, eax
// 0050efdd  0faf7d08             imul edi, dword ptr [ebp + 8]
// 0050efe1  037c2410             add edi, dword ptr [esp + 0x10]
// 0050efe5  8b6d04               mov ebp, dword ptr [ebp + 4]
// 0050efe8  037c244c             add edi, dword ptr [esp + 0x4c]
// 0050efec  40                   inc eax
// 0050efed  8b7cbd00             mov edi, dword ptr [ebp + edi*4]
// 0050eff1  893a                 mov dword ptr [edx], edi
// 0050eff3  03d1                 add edx, ecx
// 0050eff5  3bc3                 cmp eax, ebx
// 0050eff7  7cda                 jl 0x50efd3
// 0050eff9  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0050effd  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050f001  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0050f005  42                   inc edx
// 0050f006  3bd5                 cmp edx, ebp
// 0050f008  89542410             mov dword ptr [esp + 0x10], edx
// 0050f00c  7ca4                 jl 0x50efb2
// 0050f00e  eb34                 jmp 0x50f044
// 0050f010  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0050f014  50                   push eax
// 0050f015  8b442454             mov eax, dword ptr [esp + 0x54]
// 0050f019  53                   push ebx
// 0050f01a  55                   push ebp
// 0050f01b  50                   push eax
// 0050f01c  8b442458             mov eax, dword ptr [esp + 0x58]
// 0050f020  51                   push ecx
// 0050f021  8bd6                 mov edx, esi
// 0050f023  2bd5                 sub edx, ebp
// 0050f025  52                   push edx
// 0050f026  6a00                 push 0
// 0050f028  50                   push eax
// 0050f029  8d4c2450             lea ecx, [esp + 0x50]
// 0050f02d  51                   push ecx
// 0050f02e  e84df2ffff           call 0x50e280
// 0050f033  895c2478             mov dword ptr [esp + 0x78], ebx
// 0050f037  896c247c             mov dword ptr [esp + 0x7c], ebp
// 0050f03b  8bdd                 mov ebx, ebp
// 0050f03d  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 0050f041  83c424               add esp, 0x24
// 0050f044  8b542434             mov edx, dword ptr [esp + 0x34]
// 0050f048  8bc6                 mov eax, esi
// 0050f04a  2bc3                 sub eax, ebx
// 0050f04c  89442410             mov dword ptr [esp + 0x10], eax
// 0050f050  0fafc6               imul eax, esi
// 0050f053  8b0482               mov eax, dword ptr [edx + eax*4]
// 0050f056  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0050f05a  89442414             mov dword ptr [esp + 0x14], eax
// 0050f05e  8d7eff               lea edi, [esi - 1]
// 0050f061  8bc7                 mov eax, edi
// 0050f063  0fafc6               imul eax, esi
// 0050f066  8d1428               lea edx, [eax + ebp]
// 0050f069  8b5491fc             mov edx, dword ptr [ecx + edx*4 - 4]
// 0050f06d  89542418             mov dword ptr [esp + 0x18], edx
// 0050f071  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050f075  85d2                 test edx, edx
// 0050f077  7e21                 jle 0x50f09a
// 0050f079  8954241c             mov dword ptr [esp + 0x1c], edx
// 0050f07d  8d4900               lea ecx, [ecx]
// 0050f080  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050f084  8911                 mov dword ptr [ecx], edx
// 0050f086  8d14b500000000       lea edx, [esi*4]
// 0050f08d  03ca                 add ecx, edx
// 0050f08f  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0050f094  75ea                 jne 0x50f080
// 0050f096  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0050f09a  3bfd                 cmp edi, ebp
// 0050f09c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0050f0a0  7c18                 jl 0x50f0ba
// 0050f0a2  03c7                 add eax, edi
// 0050f0a4  8d0c81               lea ecx, [ecx + eax*4]
// 0050f0a7  8bc7                 mov eax, edi
// 0050f0a9  2bc5                 sub eax, ebp
// 0050f0ab  40                   inc eax
// 0050f0ac  8d642400             lea esp, [esp]
// 0050f0b0  8911                 mov dword ptr [ecx], edx
// 0050f0b2  83e904               sub ecx, 4
// 0050f0b5  83e801               sub eax, 1
// 0050f0b8  75f6                 jne 0x50f0b0
// 0050f0ba  d905ac9b8100         fld dword ptr [0x819bac]
// 0050f0c0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050f0c4  51                   push ecx
// 0050f0c5  d91c24               fstp dword ptr [esp]
// 0050f0c8  52                   push edx
// 0050f0c9  50                   push eax
// 0050f0ca  8d4c2434             lea ecx, [esp + 0x34]
// 0050f0ce  51                   push ecx
// 0050f0cf  e8ece2ffff           call 0x50d3c0
// 0050f0d4  83c410               add esp, 0x10
// 0050f0d7  83fe01               cmp esi, 1
// 0050f0da  7e4a                 jle 0x50f126
// 0050f0dc  8b442434             mov eax, dword ptr [esp + 0x34]
// 0050f0e0  83c004               add eax, 4
// 0050f0e3  8d56ff               lea edx, [esi - 1]
// 0050f0e6  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050f0ea  89542418             mov dword ptr [esp + 0x18], edx
// 0050f0ee  8bff                 mov edi, edi
// 0050f0f0  85ff                 test edi, edi
// 0050f0f2  7e20                 jle 0x50f114
// 0050f0f4  8bcf                 mov ecx, edi
// 0050f0f6  eb08                 jmp 0x50f100
// 0050f0f8  8da42400000000       lea esp, [esp]
// 0050f0ff  90                   nop 
// 0050f100  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050f104  8910                 mov dword ptr [eax], edx
// 0050f106  8d14b500000000       lea edx, [esi*4]
// 0050f10d  03c2                 add eax, edx
// 0050f10f  83e901               sub ecx, 1
// 0050f112  75ec                 jne 0x50f100
// 0050f114  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050f118  83c004               add eax, 4
// 0050f11b  836c241801           sub dword ptr [esp + 0x18], 1
// 0050f120  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050f124  75ca                 jne 0x50f0f0
// 0050f126  85f6                 test esi, esi
// 0050f128  0f8eb2000000         jle 0x50f1e0
// 0050f12e  8b442434             mov eax, dword ptr [esp + 0x34]
// 0050f132  8bef                 mov ebp, edi
// 0050f134  47                   inc edi
// 0050f135  0faffe               imul edi, esi
// 0050f138  89442414             mov dword ptr [esp + 0x14], eax
// 0050f13c  8d44b8fc             lea eax, [eax + edi*4 - 4]
// 0050f140  89742418             mov dword ptr [esp + 0x18], esi
// 0050f144  896c2424             mov dword ptr [esp + 0x24], ebp
// 0050f148  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050f14c  89742428             mov dword ptr [esp + 0x28], esi
// 0050f150  bf01000000           mov edi, 1
// 0050f155  3bef                 cmp ebp, edi
// 0050f157  897c2420             mov dword ptr [esp + 0x20], edi
// 0050f15b  7e5b                 jle 0x50f1b8
// 0050f15d  db442424             fild dword ptr [esp + 0x24]
// 0050f161  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0050f165  d95c2424             fstp dword ptr [esp + 0x24]
// 0050f169  8da42400000000       lea esp, [esp]
// 0050f170  db442420             fild dword ptr [esp + 0x20]
// 0050f174  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050f178  8b01                 mov eax, dword ptr [ecx]
// 0050f17a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0050f17e  d8742424             fdiv dword ptr [esp + 0x24]
// 0050f182  8b0a                 mov ecx, dword ptr [edx]
// 0050f184  51                   push ecx
// 0050f185  d9e8                 fld1 
// 0050f187  dee1                 fsubrp st(1)
// 0050f189  d91c24               fstp dword ptr [esp]
// 0050f18c  50                   push eax
// 0050f18d  51                   push ecx
// 0050f18e  8d442438             lea eax, [esp + 0x38]
// 0050f192  50                   push eax
// 0050f193  e828e2ffff           call 0x50d3c0
// 0050f198  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0050f19c  8b442444             mov eax, dword ptr [esp + 0x44]
// 0050f1a0  8d0c3b               lea ecx, [ebx + edi]
// 0050f1a3  47                   inc edi
// 0050f1a4  83c410               add esp, 0x10
// 0050f1a7  03de                 add ebx, esi
// 0050f1a9  3bfd                 cmp edi, ebp
// 0050f1ab  891488               mov dword ptr [eax + ecx*4], edx
// 0050f1ae  897c2420             mov dword ptr [esp + 0x20], edi
// 0050f1b2  7cbc                 jl 0x50f170
// 0050f1b4  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0050f1b8  01742418             add dword ptr [esp + 0x18], esi
// 0050f1bc  836c241c04           sub dword ptr [esp + 0x1c], 4
// 0050f1c1  8d04b500000000       lea eax, [esi*4]
// 0050f1c8  01442414             add dword ptr [esp + 0x14], eax
// 0050f1cc  4d                   dec ebp
// 0050f1cd  836c242801           sub dword ptr [esp + 0x28], 1
// 0050f1d2  896c2424             mov dword ptr [esp + 0x24], ebp
// 0050f1d6  0f8574ffffff         jne 0x50f150
// 0050f1dc  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0050f1e0  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0050f1e4  85c0                 test eax, eax
// 0050f1e6  7529                 jne 0x50f211
// 0050f1e8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050f1ec  8b542450             mov edx, dword ptr [esp + 0x50]
// 0050f1f0  53                   push ebx
// 0050f1f1  55                   push ebp
// 0050f1f2  51                   push ecx
// 0050f1f3  50                   push eax
// 0050f1f4  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0050f1f8  52                   push edx
// 0050f1f9  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0050f1fd  50                   push eax
// 0050f1fe  8d4c2448             lea ecx, [esp + 0x48]
// 0050f202  51                   push ecx
// 0050f203  52                   push edx
// 0050f204  e827e3ffff           call 0x50d530
// 0050f209  83c420               add esp, 0x20
// 0050f20c  e9b8000000           jmp 0x50f2c9
// 0050f211  83f85a               cmp eax, 0x5a
// 0050f214  0f8487000000         je 0x50f2a1
// 0050f21a  83f8a6               cmp eax, -0x5a
// 0050f21d  0f847e000000         je 0x50f2a1
// 0050f223  3db4000000           cmp eax, 0xb4
// 0050f228  0f859b000000         jne 0x50f2c9
// 0050f22e  8b442448             mov eax, dword ptr [esp + 0x48]
// 0050f232  83781004             cmp dword ptr [eax + 0x10], 4
// 0050f236  0f858d000000         jne 0x50f2c9
// 0050f23c  33d2                 xor edx, edx
// 0050f23e  85ed                 test ebp, ebp
// 0050f240  0f8e83000000         jle 0x50f2c9
// 0050f246  85db                 test ebx, ebx
// 0050f248  7e50                 jle 0x50f29a
// 0050f24a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050f24e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0050f252  0fafc6               imul eax, esi
// 0050f255  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0050f259  03c2                 add eax, edx
// 0050f25b  8d4c19ff             lea ecx, [ecx + ebx - 1]
// 0050f25f  8d0487               lea eax, [edi + eax*4]
// 0050f262  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0050f266  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0050f26a  8b5f08               mov ebx, dword ptr [edi + 8]
// 0050f26d  8b7f04               mov edi, dword ptr [edi + 4]
// 0050f270  0fafd9               imul ebx, ecx
// 0050f273  2bda                 sub ebx, edx
// 0050f275  035c244c             add ebx, dword ptr [esp + 0x4c]
// 0050f279  49                   dec ecx
// 0050f27a  03dd                 add ebx, ebp
// 0050f27c  8b28                 mov ebp, dword ptr [eax]
// 0050f27e  896c9ffc             mov dword ptr [edi + ebx*4 - 4], ebp
// 0050f282  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0050f286  8d3cb500000000       lea edi, [esi*4]
// 0050f28d  03c7                 add eax, edi
// 0050f28f  836c245c01           sub dword ptr [esp + 0x5c], 1
// 0050f294  75d0                 jne 0x50f266
// 0050f296  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0050f29a  42                   inc edx
// 0050f29b  3bd5                 cmp edx, ebp
// 0050f29d  7ca7                 jl 0x50f246
// 0050f29f  eb28                 jmp 0x50f2c9
// 0050f2a1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050f2a5  8b542450             mov edx, dword ptr [esp + 0x50]
// 0050f2a9  f7d8                 neg eax
// 0050f2ab  50                   push eax
// 0050f2ac  8b442450             mov eax, dword ptr [esp + 0x50]
// 0050f2b0  53                   push ebx
// 0050f2b1  55                   push ebp
// 0050f2b2  51                   push ecx
// 0050f2b3  6a00                 push 0
// 0050f2b5  52                   push edx
// 0050f2b6  8b542460             mov edx, dword ptr [esp + 0x60]
// 0050f2ba  50                   push eax
// 0050f2bb  8d4c244c             lea ecx, [esp + 0x4c]
// 0050f2bf  51                   push ecx
// 0050f2c0  52                   push edx
// 0050f2c1  e8baefffff           call 0x50e280
// 0050f2c6  83c424               add esp, 0x24
// 0050f2c9  8b442434             mov eax, dword ptr [esp + 0x34]
// 0050f2cd  50                   push eax
// 0050f2ce  e82d8affff           call 0x507d00
// 0050f2d3  83c404               add esp, 4
// 0050f2d6  5f                   pop edi
// 0050f2d7  5e                   pop esi
// 0050f2d8  5d                   pop ebp
// 0050f2d9  5b                   pop ebx
// 0050f2da  83c434               add esp, 0x34
// 0050f2dd  c3                   ret 

extern "C" void __cdecl sys_free(void*);
extern "C" void* __cdecl sys_alloc(unsigned int);
extern "C" unsigned char* __cdecl blend(unsigned char*, unsigned int, unsigned int, float);
extern "C" void __cdecl log_copy(void*, int, int, int, int, int, int, int, int);
extern "C" void __cdecl log_copy2(void*, int, int, int, int, int, int, int, int);

struct S {
    int f(int a, int b, int c, int d, int e, int g, int h, int i);
};

int S::f(int a, int b, int c, int d, int e, int g, int h, int i) {
    int si = (b > c) ? b : c;
    si = si + 1;
    volatile int magic = 0x81975c;
    sys_free(0);
    int sz = si * si * 4;
    int* buf = (int*)sys_alloc(sz);
    int* p = buf;
    int mode = h;
    if (mode == 0) {
        log_copy(p, 0, si - b, c, b, d, e, g, 0);
    } else if (mode == 0x5a || mode == -0x5a) {
        log_copy2(p, 0, si - c, b, c, d, e, g, mode);
        int t = b; b = c; c = t;
    } else if (mode == 0xb4) {
        int* src = (int*)g;
        if (src[4] == 4 && c > 0) {
            int dj = si - b;
            for (int j = 0; j < c; j++) {
                if (b > 0) {
                    int base = (dj + b - 1) * si - 0 + c;
                    int stride = -si * 2;
                    int* dp = p + base - 1;
                    int* sp = (int*)src[1];
                    int mul = src[2];
                    int off = src[3];
                    for (int x = 0; x < b; x++) {
                        int idx = (x * mul) + j + off + e;
                        *dp = sp[idx];
                        dp += stride;
                    }
                }
            }
        }
    }
    int diff = si - b;
    int v0 = p[0];
    int v1 = p[(si - 1) * si + c];
    if (diff > 0) {
        int* dp = p;
        for (int k = 0; k < diff; k++) {
            *dp = v0;
            dp += si;
        }
    }
    if (si - 1 >= c) {
        int* dp = p + (si - 1) * si + (si - 1);
        for (int k = si - 1; k >= c; k--) {
            *dp = v1;
            dp -= 1;
        }
    }
    blend((unsigned char*)p, v0, v1, *(float*)0x819bac);
    if (si > 1) {
        int* dp = p + 1;
        for (int row = 0; row < si - 1; row++) {
            for (int col = 0; col < si - 1; col++) {
                *dp = v0;
                dp += si;
            }
            dp += 4;
        }
    }
    if (si > 0) {
        int* dp = p;
        for (int row = 0; row < si; row++) {
            int* sp = p + row * si;
            for (int col = 1; col < si; col++) {
                int a2 = sp[0];
                int b2 = sp[col];
                float t1 = (float)col;
                float t2 = (float)(col - 1);
                float inv = 1.0f - t2 / t1;
                blend((unsigned char*)(dp + col), a2, b2, inv);
            }
            dp += si;
        }
    }
    int mode2 = i;
    if (mode2 == 0) {
        log_copy(p, 0, diff, c, b, d, e, g, 0);
    } else if (mode2 == 0x5a || mode2 == -0x5a) {
        log_copy2(p, 0, diff, b, c, d, e, g, -mode2);
    } else if (mode2 == 0xb4) {
        int* src = (int*)g;
        if (src[4] == 4 && c > 0 && b > 0) {
            for (int j = 0; j < c; j++) {
                int* sp = (int*)src[1];
                int mul = src[2];
                int off = src[3];
                int* dp = p + (diff * si + j);
                for (int x = 0; x < b; x++) {
                    int idx = (b - 1 - x) * mul + j + off + e;
                    dp[x * si] = sp[idx];
                }
            }
        }
    }
    sys_free(p);
    return 0;
}
