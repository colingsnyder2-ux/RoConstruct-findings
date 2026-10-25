// from server: 34% by colin
// roc 2008-06 004402d0  unit: RBX::Soundscape::VSoundId::?$ContentItem  size: 849 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004402d0
//
// 004402d0  55                   push ebp
// 004402d1  8bec                 mov ebp, esp
// 004402d3  6aff                 push -1
// 004402d5  68200a7c00           push 0x7c0a20
// 004402da  64a100000000         mov eax, dword ptr fs:[0]
// 004402e0  50                   push eax
// 004402e1  64892500000000       mov dword ptr fs:[0], esp
// 004402e8  83ec6c               sub esp, 0x6c
// 004402eb  53                   push ebx
// 004402ec  56                   push esi
// 004402ed  57                   push edi
// 004402ee  8965f0               mov dword ptr [ebp - 0x10], esp
// 004402f1  8bd9                 mov ebx, ecx
// 004402f3  33f6                 xor esi, esi
// 004402f5  6a04                 push 4
// 004402f7  895dec               mov dword ptr [ebp - 0x14], ebx
// 004402fa  8975fc               mov dword ptr [ebp - 4], esi
// 004402fd  e81e062600           call 0x6a0920
// 00440302  83c404               add esp, 4
// 00440305  3bc6                 cmp eax, esi
// 00440307  7407                 je 0x440310
// 00440309  8d4da0               lea ecx, [ebp - 0x60]
// 0044030c  8908                 mov dword ptr [eax], ecx
// 0044030e  eb02                 jmp 0x440312
// 00440310  33c0                 xor eax, eax
// 00440312  8945a0               mov dword ptr [ebp - 0x60], eax
// 00440315  8975ac               mov dword ptr [ebp - 0x54], esi
// 00440318  8975b0               mov dword ptr [ebp - 0x50], esi
// 0044031b  8975b4               mov dword ptr [ebp - 0x4c], esi
// 0044031e  8b8330010000         mov eax, dword ptr [ebx + 0x130]
// 00440324  8b9030020000         mov edx, dword ptr [eax + 0x230]
// 0044032a  8bb328010000         mov esi, dword ptr [ebx + 0x128]
// 00440330  0518020000           add eax, 0x218
// 00440335  8b00                 mov eax, dword ptr [eax]
// 00440337  c645fc02             mov byte ptr [ebp - 4], 2
// 0044033b  8955c8               mov dword ptr [ebp - 0x38], edx
// 0044033e  8945c4               mov dword ptr [ebp - 0x3c], eax
// 00440341  39b324010000         cmp dword ptr [ebx + 0x124], esi
// 00440347  7606                 jbe 0x44034f
// 00440349  ff1590288000         call dword ptr [0x802890]
// 0044034f  8b8b18010000         mov ecx, dword ptr [ebx + 0x118]
// 00440355  8975d0               mov dword ptr [ebp - 0x30], esi
// 00440358  8bb324010000         mov esi, dword ptr [ebx + 0x124]
// 0044035e  894dcc               mov dword ptr [ebp - 0x34], ecx
// 00440361  3bb328010000         cmp esi, dword ptr [ebx + 0x128]
// 00440367  7606                 jbe 0x44036f
// 00440369  ff1590288000         call dword ptr [0x802890]
// 0044036f  8bbb18010000         mov edi, dword ptr [ebx + 0x118]
// 00440375  897dd4               mov dword ptr [ebp - 0x2c], edi
// 00440378  8975d8               mov dword ptr [ebp - 0x28], esi
// 0044037b  eb03                 jmp 0x440380
// 0044037d  8d4900               lea ecx, [ecx]
// 00440380  85ff                 test edi, edi
// 00440382  7405                 je 0x440389
// 00440384  3b7dcc               cmp edi, dword ptr [ebp - 0x34]
// 00440387  7406                 je 0x44038f
// 00440389  ff1590288000         call dword ptr [0x802890]
// 0044038f  3b75d0               cmp esi, dword ptr [ebp - 0x30]
// 00440392  0f8462010000         je 0x4404fa
// 00440398  85ff                 test edi, edi
// 0044039a  0f850a010000         jne 0x4404aa
// 004403a0  ff1590288000         call dword ptr [0x802890]
// 004403a6  3b7710               cmp esi, dword ptr [edi + 0x10]
// 004403a9  7206                 jb 0x4403b1
// 004403ab  ff1590288000         call dword ptr [0x802890]
// 004403b1  8b16                 mov edx, dword ptr [esi]
// 004403b3  8b8b30010000         mov ecx, dword ptr [ebx + 0x130]
// 004403b9  8d45e8               lea eax, [ebp - 0x18]
// 004403bc  8955e8               mov dword ptr [ebp - 0x18], edx
// 004403bf  50                   push eax
// 004403c0  8d55bc               lea edx, [ebp - 0x44]
// 004403c3  81c118020000         add ecx, 0x218
// 004403c9  52                   push edx
// 004403ca  e8519fffff           call 0x43a320
// 004403cf  8b7dbc               mov edi, dword ptr [ebp - 0x44]
// 004403d2  85ff                 test edi, edi
// 004403d4  7405                 je 0x4403db
// 004403d6  3b7dc4               cmp edi, dword ptr [ebp - 0x3c]
// 004403d9  7406                 je 0x4403e1
// 004403db  ff1590288000         call dword ptr [0x802890]
// 004403e1  8b75c0               mov esi, dword ptr [ebp - 0x40]
// 004403e4  3b75c8               cmp esi, dword ptr [ebp - 0x38]
// 004403e7  0f84dd000000         je 0x4404ca
// 004403ed  85ff                 test edi, edi
// 004403ef  0f85bc000000         jne 0x4404b1
// 004403f5  ff1590288000         call dword ptr [0x802890]
// 004403fb  33c0                 xor eax, eax
// 004403fd  3b7018               cmp esi, dword ptr [eax + 0x18]
// 00440400  7506                 jne 0x440408
// 00440402  ff1590288000         call dword ptr [0x802890]
// 00440408  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 0044040b  3b5e20               cmp ebx, dword ptr [esi + 0x20]
// 0044040e  7606                 jbe 0x440416
// 00440410  ff1590288000         call dword ptr [0x802890]
// 00440416  8b4610               mov eax, dword ptr [esi + 0x10]
// 00440419  895de0               mov dword ptr [ebp - 0x20], ebx
// 0044041c  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00440422  8945dc               mov dword ptr [ebp - 0x24], eax
// 00440425  85ff                 test edi, edi
// 00440427  0f858b000000         jne 0x4404b8
// 0044042d  ffd3                 call ebx
// 0044042f  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 00440432  3b7718               cmp esi, dword ptr [edi + 0x18]
// 00440435  7505                 jne 0x44043c
// 00440437  ffd3                 call ebx
// 00440439  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0044043c  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0044043f  397e1c               cmp dword ptr [esi + 0x1c], edi
// 00440442  7605                 jbe 0x440449
// 00440444  ffd3                 call ebx
// 00440446  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 00440449  8b7610               mov esi, dword ptr [esi + 0x10]
// 0044044c  8d642400             lea esp, [esp]
// 00440450  85c0                 test eax, eax
// 00440452  7404                 je 0x440458
// 00440454  3bc6                 cmp eax, esi
// 00440456  7405                 je 0x44045d
// 00440458  ffd3                 call ebx
// 0044045a  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0044045d  397de0               cmp dword ptr [ebp - 0x20], edi
// 00440460  7465                 je 0x4404c7
// 00440462  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00440468  85c0                 test eax, eax
// 0044046a  7553                 jne 0x4404bf
// 0044046c  ffd3                 call ebx
// 0044046e  33c0                 xor eax, eax
// 00440470  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00440473  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 00440476  7202                 jb 0x44047a
// 00440478  ffd3                 call ebx
// 0044047a  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 0044047d  52                   push edx
// 0044047e  8d4da0               lea ecx, [ebp - 0x60]
// 00440481  e88afcfdff           call 0x420110
// 00440486  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 00440489  85c0                 test eax, eax
// 0044048b  7536                 jne 0x4404c3
// 0044048d  ffd3                 call ebx
// 0044048f  33c0                 xor eax, eax
// 00440491  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00440494  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 00440497  7202                 jb 0x44049b
// 00440499  ffd3                 call ebx
// 0044049b  8345e008             add dword ptr [ebp - 0x20], 8
// 0044049f  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004404a5  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 004404a8  eba6                 jmp 0x440450
// 004404aa  8b3f                 mov edi, dword ptr [edi]
// 004404ac  e9f5feffff           jmp 0x4403a6
// 004404b1  8b07                 mov eax, dword ptr [edi]
// 004404b3  e945ffffff           jmp 0x4403fd
// 004404b8  8b3f                 mov edi, dword ptr [edi]
// 004404ba  e973ffffff           jmp 0x440432
// 004404bf  8b00                 mov eax, dword ptr [eax]
// 004404c1  ebad                 jmp 0x440470
// 004404c3  8b00                 mov eax, dword ptr [eax]
// 004404c5  ebca                 jmp 0x440491
// 004404c7  8b5dec               mov ebx, dword ptr [ebp - 0x14]
// 004404ca  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 004404cd  85c0                 test eax, eax
// 004404cf  7525                 jne 0x4404f6
// 004404d1  ff1590288000         call dword ptr [0x802890]
// 004404d7  33c0                 xor eax, eax
// 004404d9  8b55d8               mov edx, dword ptr [ebp - 0x28]
// 004404dc  3b5010               cmp edx, dword ptr [eax + 0x10]
// 004404df  7206                 jb 0x4404e7
// 004404e1  ff1590288000         call dword ptr [0x802890]
// 004404e7  8345d804             add dword ptr [ebp - 0x28], 4
// 004404eb  8b7dd4               mov edi, dword ptr [ebp - 0x2c]
// 004404ee  8b75d8               mov esi, dword ptr [ebp - 0x28]
// 004404f1  e98afeffff           jmp 0x440380
// 004404f6  8b00                 mov eax, dword ptr [eax]
// 004404f8  ebdf                 jmp 0x4404d9
// 004404fa  8b7508               mov esi, dword ptr [ebp + 8]
// 004404fd  8b36                 mov esi, dword ptr [esi]
// 004404ff  8b7dc0               mov edi, dword ptr [ebp - 0x40]
// 00440502  33c9                 xor ecx, ecx
// 00440504  b800c54300           mov eax, 0x43c500
// 00440509  8bd8                 mov ebx, eax
// 0044050b  8b45b0               mov eax, dword ptr [ebp - 0x50]
// 0044050e  894d8c               mov dword ptr [ebp - 0x74], ecx
// 00440511  8b4dac               mov ecx, dword ptr [ebp - 0x54]
// 00440514  ba10f27100           mov edx, 0x71f210
// 00440519  895594               mov dword ptr [ebp - 0x6c], edx
// 0044051c  894508               mov dword ptr [ebp + 8], eax
// 0044051f  3bc8                 cmp ecx, eax
// 00440521  760c                 jbe 0x44052f
// 00440523  ff1590288000         call dword ptr [0x802890]
// 00440529  8b45b0               mov eax, dword ptr [ebp - 0x50]
// 0044052c  8b4dac               mov ecx, dword ptr [ebp - 0x54]
// 0044052f  8b55a0               mov edx, dword ptr [ebp - 0x60]
// 00440532  8955bc               mov dword ptr [ebp - 0x44], edx
// 00440535  894de8               mov dword ptr [ebp - 0x18], ecx
// 00440538  3bc8                 cmp ecx, eax
// 0044053a  7606                 jbe 0x440542
// 0044053c  ff1590288000         call dword ptr [0x802890]
// 00440542  8b4d8c               mov ecx, dword ptr [ebp - 0x74]
// 00440545  8b5594               mov edx, dword ptr [ebp - 0x6c]
// 00440548  83ec18               sub esp, 0x18
// 0044054b  8bc4                 mov eax, esp
// 0044054d  8918                 mov dword ptr [eax], ebx
// 0044054f  894804               mov dword ptr [eax + 4], ecx
// 00440552  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00440555  894808               mov dword ptr [eax + 8], ecx
// 00440558  8b4dbc               mov ecx, dword ptr [ebp - 0x44]
// 0044055b  89500c               mov dword ptr [eax + 0xc], edx
// 0044055e  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 00440561  897810               mov dword ptr [eax + 0x10], edi
// 00440564  897014               mov dword ptr [eax + 0x14], esi
// 00440567  8b4508               mov eax, dword ptr [ebp + 8]
// 0044056a  50                   push eax
// 0044056b  8b45a0               mov eax, dword ptr [ebp - 0x60]
// 0044056e  51                   push ecx
// 0044056f  52                   push edx
// 00440570  50                   push eax
// 00440571  8d4d88               lea ecx, [ebp - 0x78]
// 00440574  51                   push ecx
// 00440575  e8c6c3ffff           call 0x43c940
// 0044057a  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0044057d  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 00440583  33c9                 xor ecx, ecx
// 00440585  83c42c               add esp, 0x2c
// 00440588  398898010000         cmp dword ptr [eax + 0x198], ecx
// 0044058e  7472                 je 0x440602
// 00440590  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 00440596  894db8               mov dword ptr [ebp - 0x48], ecx
// 00440599  894dbc               mov dword ptr [ebp - 0x44], ecx
// 0044059c  894dc0               mov dword ptr [ebp - 0x40], ecx
// 0044059f  50                   push eax
// 004405a0  8d4db8               lea ecx, [ebp - 0x48]
// 004405a3  c645fc03             mov byte ptr [ebp - 4], 3
// 004405a7  e854691300           call 0x576f00
// 004405ac  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 004405b2  8b4204               mov eax, dword ptr [edx + 4]
// 004405b5  8d4804               lea ecx, [eax + 4]
// 004405b8  c645fc04             mov byte ptr [ebp - 4], 4
// 004405bc  ff1564248000         call dword ptr [0x802464]
// 004405c2  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 004405c8  8b9198010000         mov edx, dword ptr [ecx + 0x198]
// 004405ce  52                   push edx
// 004405cf  50                   push eax
// 004405d0  e8ebbf1400           call 0x58c5c0
// 004405d5  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 004405db  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 004405e1  8b90f0010000         mov edx, dword ptr [eax + 0x1f0]
// 004405e7  8d88f0010000         lea ecx, [eax + 0x1f0]
// 004405ed  8b02                 mov eax, dword ptr [edx]
// 004405ef  83c408               add esp, 8
// 004405f2  6a01                 push 1
// 004405f4  ffd0                 call eax
// 004405f6  8d4db8               lea ecx, [ebp - 0x48]
// 004405f9  c645fc02             mov byte ptr [ebp - 4], 2
// 004405fd  e8be6d1300           call 0x5773c0
// 00440602  8d4da0               lea ecx, [ebp - 0x60]
// 00440605  c645fc00             mov byte ptr [ebp - 4], 0
// 00440609  e8d2291600           call 0x5a2fe0
// 0044060e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00440611  5f                   pop edi
// 00440612  5e                   pop esi
// 00440613  64890d00000000       mov dword ptr fs:[0], ecx
// 0044061a  5b                   pop ebx
// 0044061b  8be5                 mov esp, ebp
// 0044061d  5d                   pop ebp
// 0044061e  c20400               ret 4

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
