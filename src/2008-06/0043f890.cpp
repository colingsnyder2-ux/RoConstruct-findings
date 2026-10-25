// from server: 34% by colin
// roc 2008-06 0043f890  unit: RBX::Soundscape::VSoundId::?$ContentItem  size: 875 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043f890
//
// 0043f890  55                   push ebp
// 0043f891  8bec                 mov ebp, esp
// 0043f893  6aff                 push -1
// 0043f895  6890097c00           push 0x7c0990
// 0043f89a  64a100000000         mov eax, dword ptr fs:[0]
// 0043f8a0  50                   push eax
// 0043f8a1  64892500000000       mov dword ptr fs:[0], esp
// 0043f8a8  83ec6c               sub esp, 0x6c
// 0043f8ab  53                   push ebx
// 0043f8ac  56                   push esi
// 0043f8ad  57                   push edi
// 0043f8ae  8965f0               mov dword ptr [ebp - 0x10], esp
// 0043f8b1  8bd9                 mov ebx, ecx
// 0043f8b3  33f6                 xor esi, esi
// 0043f8b5  6a04                 push 4
// 0043f8b7  895dec               mov dword ptr [ebp - 0x14], ebx
// 0043f8ba  8975fc               mov dword ptr [ebp - 4], esi
// 0043f8bd  e85e102600           call 0x6a0920
// 0043f8c2  83c404               add esp, 4
// 0043f8c5  3bc6                 cmp eax, esi
// 0043f8c7  7407                 je 0x43f8d0
// 0043f8c9  8d4da0               lea ecx, [ebp - 0x60]
// 0043f8cc  8908                 mov dword ptr [eax], ecx
// 0043f8ce  eb02                 jmp 0x43f8d2
// 0043f8d0  33c0                 xor eax, eax
// 0043f8d2  8945a0               mov dword ptr [ebp - 0x60], eax
// 0043f8d5  8975ac               mov dword ptr [ebp - 0x54], esi
// 0043f8d8  8975b0               mov dword ptr [ebp - 0x50], esi
// 0043f8db  8975b4               mov dword ptr [ebp - 0x4c], esi
// 0043f8de  8b8334010000         mov eax, dword ptr [ebx + 0x134]
// 0043f8e4  8b9030020000         mov edx, dword ptr [eax + 0x230]
// 0043f8ea  8bb32c010000         mov esi, dword ptr [ebx + 0x12c]
// 0043f8f0  0518020000           add eax, 0x218
// 0043f8f5  8b00                 mov eax, dword ptr [eax]
// 0043f8f7  c645fc02             mov byte ptr [ebp - 4], 2
// 0043f8fb  8955c8               mov dword ptr [ebp - 0x38], edx
// 0043f8fe  8945c4               mov dword ptr [ebp - 0x3c], eax
// 0043f901  39b328010000         cmp dword ptr [ebx + 0x128], esi
// 0043f907  7606                 jbe 0x43f90f
// 0043f909  ff1590288000         call dword ptr [0x802890]
// 0043f90f  8b8b1c010000         mov ecx, dword ptr [ebx + 0x11c]
// 0043f915  8975d0               mov dword ptr [ebp - 0x30], esi
// 0043f918  8bb328010000         mov esi, dword ptr [ebx + 0x128]
// 0043f91e  894dcc               mov dword ptr [ebp - 0x34], ecx
// 0043f921  3bb32c010000         cmp esi, dword ptr [ebx + 0x12c]
// 0043f927  7606                 jbe 0x43f92f
// 0043f929  ff1590288000         call dword ptr [0x802890]
// 0043f92f  8bbb1c010000         mov edi, dword ptr [ebx + 0x11c]
// 0043f935  897dd4               mov dword ptr [ebp - 0x2c], edi
// 0043f938  8975d8               mov dword ptr [ebp - 0x28], esi
// 0043f93b  eb03                 jmp 0x43f940
// 0043f93d  8d4900               lea ecx, [ecx]
// 0043f940  85ff                 test edi, edi
// 0043f942  7405                 je 0x43f949
// 0043f944  3b7dcc               cmp edi, dword ptr [ebp - 0x34]
// 0043f947  7406                 je 0x43f94f
// 0043f949  ff1590288000         call dword ptr [0x802890]
// 0043f94f  3b75d0               cmp esi, dword ptr [ebp - 0x30]
// 0043f952  0f8462010000         je 0x43faba
// 0043f958  85ff                 test edi, edi
// 0043f95a  0f850a010000         jne 0x43fa6a
// 0043f960  ff1590288000         call dword ptr [0x802890]
// 0043f966  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0043f969  7206                 jb 0x43f971
// 0043f96b  ff1590288000         call dword ptr [0x802890]
// 0043f971  8b16                 mov edx, dword ptr [esi]
// 0043f973  8b8b34010000         mov ecx, dword ptr [ebx + 0x134]
// 0043f979  8d45e8               lea eax, [ebp - 0x18]
// 0043f97c  8955e8               mov dword ptr [ebp - 0x18], edx
// 0043f97f  50                   push eax
// 0043f980  8d55bc               lea edx, [ebp - 0x44]
// 0043f983  81c118020000         add ecx, 0x218
// 0043f989  52                   push edx
// 0043f98a  e891a9ffff           call 0x43a320
// 0043f98f  8b7dbc               mov edi, dword ptr [ebp - 0x44]
// 0043f992  85ff                 test edi, edi
// 0043f994  7405                 je 0x43f99b
// 0043f996  3b7dc4               cmp edi, dword ptr [ebp - 0x3c]
// 0043f999  7406                 je 0x43f9a1
// 0043f99b  ff1590288000         call dword ptr [0x802890]
// 0043f9a1  8b75c0               mov esi, dword ptr [ebp - 0x40]
// 0043f9a4  3b75c8               cmp esi, dword ptr [ebp - 0x38]
// 0043f9a7  0f84dd000000         je 0x43fa8a
// 0043f9ad  85ff                 test edi, edi
// 0043f9af  0f85bc000000         jne 0x43fa71
// 0043f9b5  ff1590288000         call dword ptr [0x802890]
// 0043f9bb  33c0                 xor eax, eax
// 0043f9bd  3b7018               cmp esi, dword ptr [eax + 0x18]
// 0043f9c0  7506                 jne 0x43f9c8
// 0043f9c2  ff1590288000         call dword ptr [0x802890]
// 0043f9c8  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 0043f9cb  3b5e20               cmp ebx, dword ptr [esi + 0x20]
// 0043f9ce  7606                 jbe 0x43f9d6
// 0043f9d0  ff1590288000         call dword ptr [0x802890]
// 0043f9d6  8b4610               mov eax, dword ptr [esi + 0x10]
// 0043f9d9  895de0               mov dword ptr [ebp - 0x20], ebx
// 0043f9dc  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043f9e2  8945dc               mov dword ptr [ebp - 0x24], eax
// 0043f9e5  85ff                 test edi, edi
// 0043f9e7  0f858b000000         jne 0x43fa78
// 0043f9ed  ffd3                 call ebx
// 0043f9ef  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043f9f2  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0043f9f5  7505                 jne 0x43f9fc
// 0043f9f7  ffd3                 call ebx
// 0043f9f9  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043f9fc  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0043f9ff  397e1c               cmp dword ptr [esi + 0x1c], edi
// 0043fa02  7605                 jbe 0x43fa09
// 0043fa04  ffd3                 call ebx
// 0043fa06  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043fa09  8b7610               mov esi, dword ptr [esi + 0x10]
// 0043fa0c  8d642400             lea esp, [esp]
// 0043fa10  85c0                 test eax, eax
// 0043fa12  7404                 je 0x43fa18
// 0043fa14  3bc6                 cmp eax, esi
// 0043fa16  7405                 je 0x43fa1d
// 0043fa18  ffd3                 call ebx
// 0043fa1a  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043fa1d  397de0               cmp dword ptr [ebp - 0x20], edi
// 0043fa20  7465                 je 0x43fa87
// 0043fa22  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043fa28  85c0                 test eax, eax
// 0043fa2a  7553                 jne 0x43fa7f
// 0043fa2c  ffd3                 call ebx
// 0043fa2e  33c0                 xor eax, eax
// 0043fa30  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0043fa33  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 0043fa36  7202                 jb 0x43fa3a
// 0043fa38  ffd3                 call ebx
// 0043fa3a  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 0043fa3d  52                   push edx
// 0043fa3e  8d4da0               lea ecx, [ebp - 0x60]
// 0043fa41  e8ca06feff           call 0x420110
// 0043fa46  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043fa49  85c0                 test eax, eax
// 0043fa4b  7536                 jne 0x43fa83
// 0043fa4d  ffd3                 call ebx
// 0043fa4f  33c0                 xor eax, eax
// 0043fa51  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0043fa54  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 0043fa57  7202                 jb 0x43fa5b
// 0043fa59  ffd3                 call ebx
// 0043fa5b  8345e008             add dword ptr [ebp - 0x20], 8
// 0043fa5f  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043fa65  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0043fa68  eba6                 jmp 0x43fa10
// 0043fa6a  8b3f                 mov edi, dword ptr [edi]
// 0043fa6c  e9f5feffff           jmp 0x43f966
// 0043fa71  8b07                 mov eax, dword ptr [edi]
// 0043fa73  e945ffffff           jmp 0x43f9bd
// 0043fa78  8b3f                 mov edi, dword ptr [edi]
// 0043fa7a  e973ffffff           jmp 0x43f9f2
// 0043fa7f  8b00                 mov eax, dword ptr [eax]
// 0043fa81  ebad                 jmp 0x43fa30
// 0043fa83  8b00                 mov eax, dword ptr [eax]
// 0043fa85  ebca                 jmp 0x43fa51
// 0043fa87  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 0043fa8a  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 0043fa8d  85c0                 test eax, eax
// 0043fa8f  7525                 jne 0x43fab6
// 0043fa91  ff1590288000         call dword ptr [0x802890]
// 0043fa97  33c0                 xor eax, eax
// 0043fa99  8b55d8               mov edx, dword ptr [ebp - 0x28]
// 0043fa9c  3b5010               cmp edx, dword ptr [eax + 0x10]
// 0043fa9f  7206                 jb 0x43faa7
// 0043faa1  ff1590288000         call dword ptr [0x802890]
// 0043faa7  8345d804             add dword ptr [ebp - 0x28], 4
// 0043faab  8b7dd4               mov edi, dword ptr [ebp - 0x2c]
// 0043faae  8b75d8               mov esi, dword ptr [ebp - 0x28]
// 0043fab1  e98afeffff           jmp 0x43f940
// 0043fab6  8b00                 mov eax, dword ptr [eax]
// 0043fab8  ebdf                 jmp 0x43fa99
// 0043faba  8b7508               mov esi, dword ptr [ebp + 8]
// 0043fabd  8b36                 mov esi, dword ptr [esi]
// 0043fabf  8b7dc0               mov edi, dword ptr [ebp - 0x40]
// 0043fac2  33c9                 xor ecx, ecx
// 0043fac4  b8d0a14300           mov eax, 0x43a1d0
// 0043fac9  8bd8                 mov ebx, eax
// 0043facb  8b45b0               mov eax, dword ptr [ebp - 0x50]
// 0043face  894d8c               mov dword ptr [ebp - 0x74], ecx
// 0043fad1  8b4dac               mov ecx, dword ptr [ebp - 0x54]
// 0043fad4  ba10f27100           mov edx, 0x71f210
// 0043fad9  895594               mov dword ptr [ebp - 0x6c], edx
// 0043fadc  894508               mov dword ptr [ebp + 8], eax
// 0043fadf  3bc8                 cmp ecx, eax
// 0043fae1  760c                 jbe 0x43faef
// 0043fae3  ff1590288000         call dword ptr [0x802890]
// 0043fae9  8b45b0               mov eax, dword ptr [ebp - 0x50]
// 0043faec  8b4dac               mov ecx, dword ptr [ebp - 0x54]
// 0043faef  8b55a0               mov edx, dword ptr [ebp - 0x60]
// 0043faf2  8955bc               mov dword ptr [ebp - 0x44], edx
// 0043faf5  894de8               mov dword ptr [ebp - 0x18], ecx
// 0043faf8  3bc8                 cmp ecx, eax
// 0043fafa  7606                 jbe 0x43fb02
// 0043fafc  ff1590288000         call dword ptr [0x802890]
// 0043fb02  8b4d8c               mov ecx, dword ptr [ebp - 0x74]
// 0043fb05  8b5594               mov edx, dword ptr [ebp - 0x6c]
// 0043fb08  83ec18               sub esp, 0x18
// 0043fb0b  8bc4                 mov eax, esp
// 0043fb0d  8918                 mov dword ptr [eax], ebx
// 0043fb0f  894804               mov dword ptr [eax + 4], ecx
// 0043fb12  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0043fb15  894808               mov dword ptr [eax + 8], ecx
// 0043fb18  8b4dbc               mov ecx, dword ptr [ebp - 0x44]
// 0043fb1b  89500c               mov dword ptr [eax + 0xc], edx
// 0043fb1e  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 0043fb21  897810               mov dword ptr [eax + 0x10], edi
// 0043fb24  897014               mov dword ptr [eax + 0x14], esi
// 0043fb27  8b4508               mov eax, dword ptr [ebp + 8]
// 0043fb2a  50                   push eax
// 0043fb2b  8b45a0               mov eax, dword ptr [ebp - 0x60]
// 0043fb2e  51                   push ecx
// 0043fb2f  52                   push edx
// 0043fb30  50                   push eax
// 0043fb31  8d4d88               lea ecx, [ebp - 0x78]
// 0043fb34  51                   push ecx
// 0043fb35  e806ceffff           call 0x43c940
// 0043fb3a  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0043fb3d  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0043fb43  33c9                 xor ecx, ecx
// 0043fb45  83c42c               add esp, 0x2c
// 0043fb48  398898010000         cmp dword ptr [eax + 0x198], ecx
// 0043fb4e  7472                 je 0x43fbc2
// 0043fb50  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043fb56  894db8               mov dword ptr [ebp - 0x48], ecx
// 0043fb59  894dbc               mov dword ptr [ebp - 0x44], ecx
// 0043fb5c  894dc0               mov dword ptr [ebp - 0x40], ecx
// 0043fb5f  50                   push eax
// 0043fb60  8d4db8               lea ecx, [ebp - 0x48]
// 0043fb63  c645fc03             mov byte ptr [ebp - 4], 3
// 0043fb67  e894731300           call 0x576f00
// 0043fb6c  8b9638010000         mov edx, dword ptr [esi + 0x138]
// 0043fb72  8b4204               mov eax, dword ptr [edx + 4]
// 0043fb75  8d4804               lea ecx, [eax + 4]
// 0043fb78  c645fc04             mov byte ptr [ebp - 4], 4
// 0043fb7c  ff1564248000         call dword ptr [0x802464]
// 0043fb82  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0043fb88  8b9198010000         mov edx, dword ptr [ecx + 0x198]
// 0043fb8e  52                   push edx
// 0043fb8f  50                   push eax
// 0043fb90  e82bca1400           call 0x58c5c0
// 0043fb95  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0043fb9b  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043fba1  8b90f0010000         mov edx, dword ptr [eax + 0x1f0]
// 0043fba7  8d88f0010000         lea ecx, [eax + 0x1f0]
// 0043fbad  8b02                 mov eax, dword ptr [edx]
// 0043fbaf  83c408               add esp, 8
// 0043fbb2  6a01                 push 1
// 0043fbb4  ffd0                 call eax
// 0043fbb6  8d4db8               lea ecx, [ebp - 0x48]
// 0043fbb9  c645fc02             mov byte ptr [ebp - 4], 2
// 0043fbbd  e8fe771300           call 0x5773c0
// 0043fbc2  8d4da0               lea ecx, [ebp - 0x60]
// 0043fbc5  c645fc00             mov byte ptr [ebp - 4], 0
// 0043fbc9  e812341600           call 0x5a2fe0
// 0043fbce  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0043fbd1  5f                   pop edi
// 0043fbd2  5e                   pop esi
// 0043fbd3  64890d00000000       mov dword ptr fs:[0], ecx
// 0043fbda  5b                   pop ebx
// 0043fbdb  8be5                 mov esp, ebp
// 0043fbdd  5d                   pop ebp
// 0043fbde  c20400               ret 4
// 0043fbe1  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0043fbe4  8b11                 mov edx, dword ptr [ecx]
// 0043fbe6  8b4204               mov eax, dword ptr [edx + 4]
// 0043fbe9  6a00                 push 0
// 0043fbeb  6a00                 push 0
// 0043fbed  ffd0                 call eax
// 0043fbef  50                   push eax
// 0043fbf0  e85b102600           call 0x6a0c50
// 0043fbf5  b8cefb4300           mov eax, 0x43fbce
// 0043fbfa  c3                   ret 

// from server: 33% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 32% by colin
//

struct ContentItem {
    char pad0[0x110];
    void* begin;
    char pad1[0x8];
    void* end;
    char pad2[0x4];
    void* end2;
    char pad3[0x4];
    void* field128;
    void* field12c;
    int f();
};

extern "C" void* __cdecl sub_6A0920(int);
extern "C" void __cdecl sub_802890();
extern "C" void sub_43A320(void*, void*, void*);
extern "C" void sub_420110(void*, void*);
extern "C" void sub_43C940(void*, void*, void*, void*, void*, void*);
extern "C" void* __cdecl sub_576F00(unsigned int);
extern "C" void sub_5773C0(void*);
extern "C" void sub_58C5C0(void*, void*);
extern "C" void sub_5A2FE0(void*);
extern "C" void* __cdecl sub_802464(void*);

int ContentItem::f()
{
    void* local60;
    void* local54;
    void* local50;
    void* local4c;
    void* local44;
    void* local40;
    void* local3c;
    void* local38;
    void* local34;
    void* local30;
    void* local2c;
    void* local28;
    void* local24;
    void* local20;
    void* local18;
    void* local48;
    void* local74;
    void* local6c;
    void* local78;
    void* local8;

    void* p = sub_6A0920(4);
    if (p) {
        *(void**)p = &local60;
    } else {
        p = 0;
    }
    local60 = p;
    local54 = 0;
    local50 = 0;
    local4c = 0;

    void* eax = *(void**)((char*)this + 0x128);
    void* edx = *(void**)((char*)eax + 0x230);
    void* esi = *(void**)((char*)this + 0x120);
    eax = (char*)eax + 0x218;
    eax = *(void**)eax;
    local38 = edx;
    local3c = eax;

    if (*(unsigned int*)((char*)this + 0x11c) > (unsigned int)esi) {
        sub_802890();
    }
    void* ecx = *(void**)((char*)this + 0x110);
    local30 = esi;
    esi = *(void**)((char*)this + 0x11c);
    local34 = ecx;
    if ((unsigned int)esi > *(unsigned int*)((char*)this + 0x120)) {
        sub_802890();
    }
    void* edi = *(void**)((char*)this + 0x110);
    local2c = edi;
    local28 = esi;

    while (1) {
        if (edi != 0 && edi == local34) {
        } else {
            sub_802890();
        }
        if (esi == local30) {
            break;
        }
        if (edi != 0) {
            edi = *(void**)edi;
        } else {
            sub_802890();
        }
        if ((unsigned int)esi < *(unsigned int*)((char*)edi + 0x10)) {
        } else {
            sub_802890();
        }
        void* edx2 = *(void**)esi;
        void* ecx2 = *(void**)((char*)this + 0x128);
        local18 = edx2;
        ecx2 = (char*)ecx2 + 0x218;
        sub_43A320(ecx2, &local44, &local18);

        void* edi2 = local44;
        if (edi2 != 0 && edi2 == local3c) {
        } else {
            sub_802890();
        }
        void* esi2 = local40;
        if (esi2 == local38) {
            goto after_inner;
        }
        if (edi2 != 0) {
            edi2 = *(void**)edi2;
        } else {
            sub_802890();
        }
        if (esi2 == *(void**)((char*)0 + 0x18)) {
        } else {
            sub_802890();
        }
        void* ebx = *(void**)((char*)esi2 + 0x1c);
        if ((unsigned int)ebx > *(unsigned int*)((char*)esi2 + 0x20)) {
            sub_802890();
        }
        void* eax2 = *(void**)((char*)esi2 + 0x10);
        local20 = ebx;
        local24 = eax2;

        if (edi2 != 0) {
            edi2 = *(void**)edi2;
        } else {
            sub_802890();
        }
        if (esi2 == *(void**)((char*)edi2 + 0x18)) {
        } else {
            sub_802890();
        }
        void* edi3 = *(void**)((char*)esi2 + 0x20);
        if (*(unsigned int*)((char*)esi2 + 0x1c) > (unsigned int)edi3) {
            sub_802890();
        }
        void* esi3 = *(void**)((char*)esi2 + 0x10);

        while (1) {
            if (eax2 != 0 && eax2 == esi3) {
            } else {
                sub_802890();
            }
            if (local20 == edi3) {
                break;
            }
            if (eax2 != 0) {
                eax2 = *(void**)eax2;
            } else {
                sub_802890();
            }
            if ((unsigned int)local20 < *(unsigned int*)((char*)eax2 + 0x10)) {
            } else {
                sub_802890();
            }
            sub_420110(&local60, local20);
            if (eax2 != 0) {
                eax2 = *(void**)eax2;
            } else {
                sub_802890();
            }
            if ((unsigned int)local20 < *(unsigned int*)((char*)eax2 + 0x10)) {
            } else {
                sub_802890();
            }
            local20 = (char*)local20 + 8;
        }
        goto after_inner2;
after_inner:
        ;
after_inner2:
        if (local2c != 0) {
            local2c = *(void**)local2c;
        } else {
            sub_802890();
        }
        if ((unsigned int)local28 < *(unsigned int*)((char*)local2c + 0x10)) {
        } else {
            sub_802890();
        }
        local28 = (char*)local28 + 4;
        esi = local28;
        edi = local2c;
    }

    void* arg8 = *(void**)((char*)this + 0x120);
    void* edi4 = local40;
    void* eax3 = (void*)0x43A720;
    void* ebx2 = eax3;
    void* eax4 = local50;
    void* ecx3 = local54;
    void* edx3 = (void*)0x71F210;
    local74 = 0;
    local6c = edx3;
    local8 = eax4;
    if ((unsigned int)ecx3 > (unsigned int)eax4) {
        sub_802890();
        eax4 = local50;
        ecx3 = local54;
    }
    void* edx4 = local60;
    local44 = edx4;
    local18 = ecx3;
    if ((unsigned int)ecx3 > (unsigned int)eax4) {
        sub_802890();
    }
    void* ecx4 = local74;
    void* edx5 = local6c;

    void* stack[6];
    stack[0] = ebx2;
    stack[1] = ecx4;
    stack[2] = this;
    stack[3] = edx5;
    stack[5] = arg8;
    stack[4] = edi4;

    sub_43C940(&local78, local44, local18, local8, local44, stack);

    void* esi4 = this;
    void* eax5 = *(void**)((char*)esi4 + 0x128);
    if (*(void**)((char*)eax5 + 0x198) != 0) {
        void* eax6 = *(void**)((char*)eax5 + 0x198);
        local48 = 0;
        local44 = 0;
        local40 = 0;
        sub_576F00((unsigned int)eax6);
        void* edx6 = *(void**)((char*)esi4 + 0x12c);
        void* eax7 = *(void**)((char*)edx6 + 4);
        void* ecx5 = (char*)eax7 + 4;
        void* r = sub_802464(ecx5);
        void* ecx6 = *(void**)((char*)esi4 + 0x128);
        void* edx7 = *(void**)((char*)ecx6 + 0x198);
        sub_58C5C0(r, edx7);
        void* eax8 = *(void**)((char*)esi4 + 0x128);
        void* eax9 = *(void**)((char*)eax8 + 0x198);
        void* edx8 = *(void**)((char*)eax9 + 0x1f0);
        void* ecx7 = (char*)eax9 + 0x1f0;
        void* eax10 = *(void**)edx8;
        ((void(__thiscall*)(void*, int))eax10)(ecx7, 1);
        sub_5773C0(&local48);
    }
    sub_5A2FE0(&local60);
    return 0;
}
