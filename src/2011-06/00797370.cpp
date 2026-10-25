// from server: 36% by atomic.potato
// roc 2011-06 00797370  unit: RBX::VHttp::?$sp_counted_impl_p  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00797370
//
// 00797370  64a100000000         mov eax, dword ptr fs:[0]
// 00797376  6aff                 push -1
// 00797378  688b889d00           push 0x9d888b
// 0079737d  50                   push eax
// 0079737e  64892500000000       mov dword ptr fs:[0], esp
// 00797385  8b442418             mov eax, dword ptr [esp + 0x18]
// 00797389  56                   push esi
// 0079738a  57                   push edi
// 0079738b  85c0                 test eax, eax
// 0079738d  7562                 jne 0x7973f1
// 0079738f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00797393  8b38                 mov edi, dword ptr [eax]
// 00797395  6a38                 push 0x38
// 00797397  e8c22c0700           call 0x80a05e
// 0079739c  8bf0                 mov esi, eax
// 0079739e  83c404               add esp, 4
// 007973a1  89742420             mov dword ptr [esp + 0x20], esi
// 007973a5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007973ad  85f6                 test esi, esi
// 007973af  7427                 je 0x7973d8
// 007973b1  8b0f                 mov ecx, dword ptr [edi]
// 007973b3  83c708               add edi, 8
// 007973b6  890e                 mov dword ptr [esi], ecx
// 007973b8  57                   push edi
// 007973b9  8d4e08               lea ecx, [esi + 8]
// 007973bc  e81feeffff           call 0x7961e0
// 007973c1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007973c5  8932                 mov dword ptr [edx], esi
// 007973c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007973cb  64890d00000000       mov dword ptr fs:[0], ecx
// 007973d2  5f                   pop edi
// 007973d3  5e                   pop esi
// 007973d4  83c40c               add esp, 0xc
// 007973d7  c3                   ret 
// 007973d8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007973dc  33f6                 xor esi, esi
// 007973de  8932                 mov dword ptr [edx], esi
// 007973e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007973e4  64890d00000000       mov dword ptr fs:[0], ecx
// 007973eb  5f                   pop edi
// 007973ec  5e                   pop esi
// 007973ed  83c40c               add esp, 0xc
// 007973f0  c3                   ret 
// 007973f1  83f801               cmp eax, 1
// 007973f4  7523                 jne 0x797419
// 007973f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 007973fa  8b08                 mov ecx, dword ptr [eax]
// 007973fc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00797400  890a                 mov dword ptr [edx], ecx
// 00797402  c70000000000         mov dword ptr [eax], 0
// 00797408  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0079740c  64890d00000000       mov dword ptr fs:[0], ecx
// 00797413  5f                   pop edi
// 00797414  5e                   pop esi
// 00797415  83c40c               add esp, 0xc
// 00797418  c3                   ret 
// 00797419  83f802               cmp eax, 2
// 0079741c  7532                 jne 0x797450
// 0079741e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00797422  8b37                 mov esi, dword ptr [edi]
// 00797424  85f6                 test esi, esi
// 00797426  7411                 je 0x797439
// 00797428  8d4e08               lea ecx, [esi + 8]
// 0079742b  e820ebffff           call 0x795f50
// 00797430  56                   push esi
// 00797431  e8222c0700           call 0x80a058
// 00797436  83c404               add esp, 4
// 00797439  c70700000000         mov dword ptr [edi], 0
// 0079743f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00797443  64890d00000000       mov dword ptr fs:[0], ecx
// 0079744a  5f                   pop edi
// 0079744b  5e                   pop esi
// 0079744c  83c40c               add esp, 0xc
// 0079744f  c3                   ret 
// 00797450  83f803               cmp eax, 3
// 00797453  7545                 jne 0x79749a
// 00797455  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00797459  8b0e                 mov ecx, dword ptr [esi]
// 0079745b  68d817c900           push 0xc917d8
// 00797460  ff15500aa400         call dword ptr [0xa40a50]
// 00797466  84c0                 test al, al
// 00797468  7419                 je 0x797483
// 0079746a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079746e  8b08                 mov ecx, dword ptr [eax]
// 00797470  890e                 mov dword ptr [esi], ecx
// 00797472  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00797476  64890d00000000       mov dword ptr fs:[0], ecx
// 0079747d  5f                   pop edi
// 0079747e  5e                   pop esi
// 0079747f  83c40c               add esp, 0xc
// 00797482  c3                   ret 
// 00797483  c70600000000         mov dword ptr [esi], 0
// 00797489  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0079748d  64890d00000000       mov dword ptr fs:[0], ecx
// 00797494  5f                   pop edi
// 00797495  5e                   pop esi
// 00797496  83c40c               add esp, 0xc
// 00797499  c3                   ret 
// 0079749a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079749e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007974a2  5f                   pop edi
// 007974a3  c700d817c900         mov dword ptr [eax], 0xc917d8
// 007974a9  c6400400             mov byte ptr [eax + 4], 0
// 007974ad  c6400500             mov byte ptr [eax + 5], 0
// 007974b1  64890d00000000       mov dword ptr fs:[0], ecx
// 007974b8  5e                   pop esi
// 007974b9  83c40c               add esp, 0xc
// 007974bc  c3                   ret 

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl free(void*);
extern "C" int __cdecl __CxxFrameHandler3();

struct type_info;

struct S {
    void* field0;
    char pad[0x34];
};

struct T {
    void* field0;
    char pad[0x34];
};

void sub_795f50(void*);
void sub_7961e0(void*, void*);

void S_ctor(void* p, void* q);

void func(int a, void** b, void** c);

void func(int a, void** b, void** c)
{
    if (a == 0) {
        void* edi = *b;
        S* esi = (S*)malloc(0x38);
        if (esi) {
            *(void**)esi = *(void**)edi;
            sub_7961e0((char*)esi + 8, (char*)edi + 8);
            *c = esi;
        } else {
            *c = 0;
        }
        return;
    }
    if (a == 1) {
        void* eax = *b;
        *c = *(void**)eax;
        *(void**)eax = 0;
        return;
    }
    if (a == 2) {
        S* esi = (S*)*c;
        if (esi) {
            sub_795f50((char*)esi + 8);
            free(esi);
        }
        *c = 0;
        return;
    }
    if (a == 3) {
        void* esi = *c;
        if (*(bool*)0xc917d8) {
            *c = *b;
        } else {
            *c = 0;
        }
        return;
    }
    *c = (void*)0xc917d8;
    *((char*)c + 4) = 0;
    *((char*)c + 5) = 0;
}
