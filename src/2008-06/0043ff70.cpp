// from server: 12% by colin
// from server: 11% by colin
// roc 2008-06 0043ff70  unit: RBX::Soundscape::VSoundId::?$ContentItem  size: 817 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043ff70
//
// 0043ff70  55                   push ebp
// 0043ff71  8bec                 mov ebp, esp
// 0043ff73  6aff                 push -1
// 0043ff75  68f0097c00           push 0x7c09f0
// 0043ff7a  64a100000000         mov eax, dword ptr fs:[0]
// 0043ff80  50                   push eax
// 0043ff81  64892500000000       mov dword ptr fs:[0], esp
// 0043ff88  83ec74               sub esp, 0x74
// 0043ff8b  53                   push ebx
// 0043ff8c  56                   push esi
// 0043ff8d  57                   push edi
// 0043ff8e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0043ff91  8bd9                 mov ebx, ecx
// 0043ff93  33f6                 xor esi, esi
// 0043ff95  6a04                 push 4
// 0043ff97  895de8               mov dword ptr [ebp - 0x18], ebx
// 0043ff9a  8975fc               mov dword ptr [ebp - 4], esi
// 0043ff9d  e87e092600           call 0x6a0920
// 0043ffa2  83c404               add esp, 4
// 0043ffa5  3bc6                 cmp eax, esi
// 0043ffa7  7407                 je 0x43ffb0
// 0043ffa9  8d4da0               lea ecx, [ebp - 0x60]
// 0043ffac  8908                 mov dword ptr [eax], ecx
// 0043ffae  eb02                 jmp 0x43ffb2
// 0043ffb0  33c0                 xor eax, eax
// 0043ffb2  8945a0               mov dword ptr [ebp - 0x60], eax
// 0043ffb5  8975ac               mov dword ptr [ebp - 0x54], esi
// 0043ffb8  8975b0               mov dword ptr [ebp - 0x50], esi
// 0043ffbb  8975b4               mov dword ptr [ebp - 0x4c], esi
// 0043ffbe  8b8328010000         mov eax, dword ptr [ebx + 0x128]
// 0043ffc4  8b9030020000         mov edx, dword ptr [eax + 0x230]
// 0043ffca  8bb320010000         mov esi, dword ptr [ebx + 0x120]
// 0043ffd0  0518020000           add eax, 0x218
// 0043ffd5  8b00                 mov eax, dword ptr [eax]
// 0043ffd7  c645fc02             mov byte ptr [ebp - 4], 2
// 0043ffdb  8955c8               mov dword ptr [ebp - 0x38], edx
// 0043ffde  8945c4               mov dword ptr [ebp - 0x3c], eax
// 0043ffe1  39b31c010000         cmp dword ptr [ebx + 0x11c], esi
// 0043ffe7  7606                 jbe 0x43ffef
// 0043ffe9  ff1590288000         call dword ptr [0x802890]
// 0043ffef  8b8b10010000         mov ecx, dword ptr [ebx + 0x110]
// 0043fff5  8975d0               mov dword ptr [ebp - 0x30], esi
// 0043fff8  8bb31c010000         mov esi, dword ptr [ebx + 0x11c]
// 0043fffe  894dcc               mov dword ptr [ebp - 0x34], ecx
// 00440001  3bb320010000         cmp esi, dword ptr [ebx + 0x120]
// 00440007  7606                 jbe 0x44000f
// 00440009  ff1590288000         call dword ptr [0x802890]
// 0044000f  8bbb10010000         mov edi, dword ptr [ebx + 0x110]
// 00440015  897dd4               mov dword ptr [ebp - 0x2c], edi
// 00440018  8975d8               mov dword ptr [ebp - 0x28], esi
// 0044001b  eb03                 jmp 0x440020
// 0044001d  8d4900               lea ecx, [ecx]
// 00440020  85ff                 test edi, edi
// 00440022  7405                 je 0x440029
// 00440024  3b7dcc               cmp edi, dword ptr [ebp - 0x34]
// 00440027  7406                 je 0x44002f
// 00440029  ff1590288000         call dword ptr [0x802890]
// 0044002f  3b75d0               cmp esi, dword ptr [ebp - 0x30]
// 00440032  0f8462010000         je 0x44019a
// 00440038  85ff                 test edi, edi
// 0044003a  0f850a010000         jne 0x44014a
// 00440040  ff1590288000         call dword ptr [0x802890]
// 00440046  3b7710               cmp esi, dword ptr [edi + 0x10]
// 00440049  7206                 jb 0x440051
// 0044004b  ff1590288000         call dword ptr [0x802890]
// 00440051  8b16                 mov edx, dword ptr [esi]
// 00440053  8b8b28010000         mov ecx, dword ptr [ebx + 0x128]
// 00440059  8d45ec               lea eax, [ebp - 0x14]
// 0044005c  8955ec               mov dword ptr [ebp - 0x14], edx
// 0044005f  50                   push eax
// 00440060  8d55bc               lea edx, [ebp - 0x44]
// 00440063  81c118020000         add ecx, 0x218
// 00440069  52                   push edx
// 0044006a  e8b1a2ffff           call 0x43a320
// 0044006f  8b7dbc               mov edi, dword ptr [ebp - 0x44]
// 00440072  85ff                 test edi, edi
// 00440074  7405                 je 0x44007b
// 00440076  3b7dc4               cmp edi, dword ptr [ebp - 0x3c]
// 00440079  7406                 je 0x440081
// 0044007b  ff1590288000         call dword ptr [0x802890]
// 00440081  8b75c0               mov esi, dword ptr [ebp - 0x40]
// 00440084  3b75c8               cmp esi, dword ptr [ebp - 0x38]
// 00440087  0f84dd000000         je 0x44016a
// 0044008d  85ff                 test edi, edi
// 0044008f  0f85bc000000         jne 0x440151
// 00440095  ff1590288000         call dword ptr [0x802890]
// 0044009b  33c0                 xor eax, eax
// 0044009d  3b7018               cmp esi, dword ptr [eax + 0x18]
// 004400a0  7506                 jne 0x4400a8
// 004400a2  ff1590288000         call dword ptr [0x802890]
// 004400a8  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 004400ab  3b5e20               cmp ebx, dword ptr [esi + 0x20]
// 004400ae  7606                 jbe 0x4400b6
// 004400b0  ff1590288000         call dword ptr [0x802890]
// 004400b6  8b4610               mov eax, dword ptr [esi + 0x10]
// 004400b9  895de0               mov dword ptr [ebp - 0x20], ebx
// 004400bc  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004400c2  8945dc               mov dword ptr [ebp - 0x24], eax
// 004400c5  85ff                 test edi, edi
// 004400c7  0f858b000000         jne 0x440158
// 004400cd  ffd3                 call ebx
// 004400cf  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 004400d2  3b7718               cmp esi, dword ptr [edi + 0x18]
// 004400d5  7505                 jne 0x4400dc
// 004400d7  ffd3                 call ebx
// 004400d9  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 004400dc  8b7e20               mov edi, dword ptr [esi + 0x20]
// 004400df  397e1c               cmp dword ptr [esi + 0x1c], edi
// 004400e2  7605                 jbe 0x4400e9
// 004400e4  ffd3                 call ebx
// 004400e6  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 004400e9  8b7610               mov esi, dword ptr [esi + 0x10]
// 004400ec  8d642400             lea esp, [esp]
// 004400f0  85c0                 test eax, eax
// 004400f2  7404                 je 0x4400f8
// 004400f4  3bc6                 cmp eax, esi
// 004400f6  7405                 je 0x4400fd
// 004400f8  ffd3                 call ebx
// 004400fa  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 004400fd  397de0               cmp dword ptr [ebp - 0x20], edi
// 00440100  7465                 je 0x440167
// 00440102  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00440108  85c0                 test eax, eax
// 0044010a  7553                 jne 0x44015f
// 0044010c  ffd3                 call ebx
// 0044010e  33c0                 xor eax, eax
// 00440110  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00440113  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 00440116  7202                 jb 0x44011a
// 00440118  ffd3                 call ebx
// 0044011a  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 0044011d  52                   push edx
// 0044011e  8d4da0               lea ecx, [ebp - 0x60]
// 00440121  e8eafffdff           call 0x420110
// 00440126  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 00440129  85c0                 test eax, eax
// 0044012b  7536                 jne 0x440163
// 0044012d  ffd3                 call ebx
// 0044012f  33c0                 xor eax, eax
// 00440131  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00440134  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 00440137  7202                 jb 0x44013b
// 00440139  ffd3                 call ebx
// 0044013b  8345e008             add dword ptr [ebp - 0x20], 8
// 0044013f  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00440145  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 00440148  eba6                 jmp 0x4400f0
// 0044014a  8b3f                 mov edi, dword ptr [edi]
// 0044014c  e9f5feffff           jmp 0x440046
// 00440151  8b07                 mov eax, dword ptr [edi]
// 00440153  e945ffffff           jmp 0x44009d
// 00440158  8b3f                 mov edi, dword ptr [edi]
// 0044015a  e973ffffff           jmp 0x4400d2
// 0044015f  8b00                 mov eax, dword ptr [eax]
// 00440161  ebad                 jmp 0x440110
// 00440163  8b00                 mov eax, dword ptr [eax]
// 00440165  ebca                 jmp 0x440131
// 00440167  8b5de8               mov ebx, dword ptr [ebp - 0x18]
// 0044016a  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 0044016d  85c0                 test eax, eax
// 0044016f  7525                 jne 0x440196
// 00440171  ff1590288000         call dword ptr [0x802890]
// 00440177  33c0                 xor eax, eax
// 00440179  8b55d8               mov edx, dword ptr [ebp - 0x28]
// 0044017c  3b5010               cmp edx, dword ptr [eax + 0x10]
// 0044017f  7206                 jb 0x440187
// 00440181  ff1590288000         call dword ptr [0x802890]
// 00440187  8345d804             add dword ptr [ebp - 0x28], 4
// 0044018b  8b7dd4               mov edi, dword ptr [ebp - 0x2c]
// 0044018e  8b75d8               mov esi, dword ptr [ebp - 0x28]
// 00440191  e98afeffff           jmp 0x440020
// 00440196  8b00                 mov eax, dword ptr [eax]
// 00440198  ebdf                 jmp 0x440179
// 0044019a  8b4508               mov eax, dword ptr [ebp + 8]
// 0044019d  d900                 fld dword ptr [eax]
// 0044019f  8b7dc0               mov edi, dword ptr [ebp - 0x40]
// 004401a2  d94004               fld dword ptr [eax + 4]
// 004401a5  83ec20               sub esp, 0x20
// 004401a8  d94008               fld dword ptr [eax + 8]
// 004401ab  8bc4                 mov eax, esp
// 004401ad  b920a74300           mov ecx, 0x43a720
// 004401b2  d9ca                 fxch st(2)
// 004401b4  8908                 mov dword ptr [eax], ecx
// 004401b6  33d2                 xor edx, edx
// 004401b8  895004               mov dword ptr [eax + 4], edx
// 004401bb  895808               mov dword ptr [eax + 8], ebx
// 004401be  be10f27100           mov esi, 0x71f210
// 004401c3  89700c               mov dword ptr [eax + 0xc], esi
// 004401c6  897810               mov dword ptr [eax + 0x10], edi
// 004401c9  d95814               fstp dword ptr [eax + 0x14]
// 004401cc  896508               mov dword ptr [ebp + 8], esp
// 004401cf  d95818               fstp dword ptr [eax + 0x18]
// 004401d2  d9581c               fstp dword ptr [eax + 0x1c]
// 004401d5  8b45b0               mov eax, dword ptr [ebp - 0x50]
// 004401d8  8b4dac               mov ecx, dword ptr [ebp - 0x54]
// 004401db  8bf0                 mov esi, eax
// 004401dd  3bc8                 cmp ecx, eax
// 004401df  760c                 jbe 0x4401ed
// 004401e1  ff1590288000         call dword ptr [0x802890]
// 004401e7  8b45b0               mov eax, dword ptr [ebp - 0x50]
// 004401ea  8b4dac               mov ecx, dword ptr [ebp - 0x54]
// 004401ed  8b7da0               mov edi, dword ptr [ebp - 0x60]
// 004401f0  894d08               mov dword ptr [ebp + 8], ecx
// 004401f3  3bc8                 cmp ecx, eax
// 004401f5  7606                 jbe 0x4401fd
// 004401f7  ff1590288000         call dword ptr [0x802890]
// 004401fd  8b4508               mov eax, dword ptr [ebp + 8]
// 00440200  8b4da0               mov ecx, dword ptr [ebp - 0x60]
// 00440203  56                   push esi
// 00440204  57                   push edi
// 00440205  50                   push eax
// 00440206  51                   push ecx
// 00440207  8d5580               lea edx, [ebp - 0x80]
// 0044020a  52                   push edx
// 0044020b  e880b1ffff           call 0x43b390
// 00440210  8b8328010000         mov eax, dword ptr [ebx + 0x128]
// 00440216  33c9                 xor ecx, ecx
// 00440218  83c434               add esp, 0x34
// 0044021b  398898010000         cmp dword ptr [eax + 0x198], ecx
// 00440221  7472                 je 0x440295
// 00440223  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 00440229  894db8               mov dword ptr [ebp - 0x48], ecx
// 0044022c  894dbc               mov dword ptr [ebp - 0x44], ecx
// 0044022f  894dc0               mov dword ptr [ebp - 0x40], ecx
// 00440232  50                   push eax
// 00440233  8d4db8               lea ecx, [ebp - 0x48]
// 00440236  c645fc03             mov byte ptr [ebp - 4], 3
// 0044023a  e8c16c1300           call 0x576f00
// 0044023f  8b832c010000         mov eax, dword ptr [ebx + 0x12c]
// 00440245  8b4004               mov eax, dword ptr [eax + 4]
// 00440248  8d4804               lea ecx, [eax + 4]
// 0044024b  c645fc04             mov byte ptr [ebp - 4], 4
// 0044024f  ff1564248000         call dword ptr [0x802464]
// 00440255  8b8b28010000         mov ecx, dword ptr [ebx + 0x128]
// 0044025b  8b9198010000         mov edx, dword ptr [ecx + 0x198]
// 00440261  52                   push edx
// 00440262  50                   push eax
// 00440263  e858c31400           call 0x58c5c0
// 00440268  8b8328010000         mov eax, dword ptr [ebx + 0x128]
// 0044026e  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 00440274  8b90f0010000         mov edx, dword ptr [eax + 0x1f0]
// 0044027a  8d88f0010000         lea ecx, [eax + 0x1f0]
// 00440280  8b02                 mov eax, dword ptr [edx]
// 00440282  83c408               add esp, 8
// 00440285  6a01                 push 1
// 00440287  ffd0                 call eax
// 00440289  8d4db8               lea ecx, [ebp - 0x48]
// 0044028c  c645fc02             mov byte ptr [ebp - 4], 2
// 00440290  e82b711300           call 0x5773c0
// 00440295  8d4da0               lea ecx, [ebp - 0x60]
// 00440298  c645fc00             mov byte ptr [ebp - 4], 0
// 0044029c  e83f2d1600           call 0x5a2fe0




extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void acquire();
    void release();
};

struct ContentId {
    void* rep;
    ContentId();
    ContentId(const ContentId&);
    __declspec(dllimport) ~ContentId() throw();
};

struct SoundId : ContentId {
    SoundId(const ContentId& id);
};

struct ContentItem {
    ContentItem(const ContentId& t, const ContentId& r, int d);
    ContentId title;
    ContentId reference;
    int depth;
};

struct Sound {
    char pad0[0x110];
    void* begin;
    char pad1[0x8];
    void* end;
    char pad2[0x4];
    void* cap;
    char pad3[0x4];
    void* mgr;
    char pad4[0x4];
    void* sys;
    char pad5[0x1c];
    void* obj198;
    char pad6[0x4];
    void* obj12c;

    void addContentItem(const ContentId& id, const float* pos);
};

extern "C" void __stdcall sub_802890();
extern "C" void __stdcall sub_802464();

void __cdecl sub_43a320(void* a, const void* b);
void __cdecl sub_43b390(void* a, void* b, void* c, void* d, void* e);
void __cdecl sub_576f00(void* a, void* b);
void __cdecl sub_5773c0(void* a);
void __cdecl sub_58c5c0(void* a, void* b);
void __cdecl sub_5a2fe0(void* a);
void* __cdecl sub_6a0920(unsigned int);
void __cdecl sub_420110(void* a, const void* b);

void Sound::addContentItem(const ContentId& id, const float* pos)
{
    ContentItem* item = (ContentItem*)sub_6a0920(4);
    if (item) {
        item->title.rep = 0;
        item->reference.rep = 0;
        item->depth = 0;
    }
    ContentId tmp;
    tmp.rep = 0;
    sub_43a320(&tmp, &id);
    sub_420110(&tmp, pos);
    sub_5a2fe0(&tmp);
}
