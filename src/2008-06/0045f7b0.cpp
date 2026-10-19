// from server: 55% by colin
// from server: 54% by colin
// roc 2008-06 0045f7b0  unit: RBX::Stats::Item  size: 1068 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045f7b0
//
// 0045f7b0  6aff                 push -1
// 0045f7b2  64a100000000         mov eax, dword ptr fs:[0]
// 0045f7b8  682c307c00           push 0x7c302c
// 0045f7bd  50                   push eax
// 0045f7be  64892500000000       mov dword ptr fs:[0], esp
// 0045f7c5  83ec34               sub esp, 0x34
// 0045f7c8  53                   push ebx
// 0045f7c9  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0045f7cd  55                   push ebp
// 0045f7ce  56                   push esi
// 0045f7cf  8bf1                 mov esi, ecx
// 0045f7d1  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0045f7d4  57                   push edi
// 0045f7d5  3bd8                 cmp ebx, eax
// 0045f7d7  0f84d8030000         je 0x45fbb5
// 0045f7dd  837e7000             cmp dword ptr [esi + 0x70], 0
// 0045f7e1  8d6e70               lea ebp, [esi + 0x70]
// 0045f7e4  0f84eb000000         je 0x45f8d5
// 0045f7ea  8b4500               mov eax, dword ptr [ebp]
// 0045f7ed  83ec08               sub esp, 8
// 0045f7f0  8bcc                 mov ecx, esp
// 0045f7f2  8901                 mov dword ptr [ecx], eax
// 0045f7f4  8b4504               mov eax, dword ptr [ebp + 4]
// 0045f7f7  8964245c             mov dword ptr [esp + 0x5c], esp
// 0045f7fb  894104               mov dword ptr [ecx + 4], eax
// 0045f7fe  85c0                 test eax, eax
// 0045f800  740c                 je 0x45f80e
// 0045f802  83c004               add eax, 4
// 0045f805  b901000000           mov ecx, 1
// 0045f80a  f00fc108             lock xadd dword ptr [eax], ecx
// 0045f80e  8d4c2418             lea ecx, [esp + 0x18]
// 0045f812  e82923fbff           call 0x411b40
// 0045f817  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0045f81a  8d7e64               lea edi, [esi + 0x64]
// 0045f81d  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0045f825  85c9                 test ecx, ecx
// 0045f827  740e                 je 0x45f837
// 0045f829  6a00                 push 0
// 0045f82b  e8c0b00f00           call 0x55a8f0
// 0045f830  8bcf                 mov ecx, edi
// 0045f832  e84976ffff           call 0x456e80
// 0045f837  8b4d00               mov ecx, dword ptr [ebp]
// 0045f83a  85c9                 test ecx, ecx
// 0045f83c  7413                 je 0x45f851
// 0045f83e  e89de4ffff           call 0x45dce0
// 0045f843  85c0                 test eax, eax
// 0045f845  740a                 je 0x45f851
// 0045f847  c7803001000000000000 mov dword ptr [eax + 0x130], 0
// 0045f851  8bbea4000000         mov edi, dword ptr [esi + 0xa4]
// 0045f857  393df4ef9600         cmp dword ptr [0x96eff4], edi
// 0045f85d  7412                 je 0x45f871
// 0045f85f  8b17                 mov edx, dword ptr [edi]
// 0045f861  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0045f867  8bcf                 mov ecx, edi
// 0045f869  ffd0                 call eax
// 0045f86b  893df4ef9600         mov dword ptr [0x96eff4], edi
// 0045f871  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0045f877  85c9                 test ecx, ecx
// 0045f879  7408                 je 0x45f883
// 0045f87b  8b11                 mov edx, dword ptr [ecx]
// 0045f87d  8b02                 mov eax, dword ptr [edx]
// 0045f87f  6a01                 push 1
// 0045f881  ffd0                 call eax
// 0045f883  8d4654               lea eax, [esi + 0x54]
// 0045f886  c786b000000000000000 mov dword ptr [esi + 0xb0], 0
// 0045f890  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0045f893  8d7e78               lea edi, [esi + 0x78]
// 0045f896  50                   push eax
// 0045f897  e8945f0f00           call 0x555830
// 0045f89c  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0045f8a2  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 0045f8ac  85c0                 test eax, eax
// 0045f8ae  740d                 je 0x45f8bd
// 0045f8b0  8b5028               mov edx, dword ptr [eax + 0x28]
// 0045f8b3  8d4828               lea ecx, [eax + 0x28]
// 0045f8b6  8b4204               mov eax, dword ptr [edx + 4]
// 0045f8b9  6a01                 push 1
// 0045f8bb  ffd0                 call eax
// 0045f8bd  8bcf                 mov ecx, edi
// 0045f8bf  e8bc75ffff           call 0x456e80
// 0045f8c4  8d4c2410             lea ecx, [esp + 0x10]
// 0045f8c8  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0045f8d0  e8eb7a1100           call 0x5773c0
// 0045f8d5  395e6c               cmp dword ptr [esi + 0x6c], ebx
// 0045f8d8  741e                 je 0x45f8f8
// 0045f8da  85db                 test ebx, ebx
// 0045f8dc  7408                 je 0x45f8e6
// 0045f8de  8b0b                 mov ecx, dword ptr [ebx]
// 0045f8e0  8b5104               mov edx, dword ptr [ecx + 4]
// 0045f8e3  53                   push ebx
// 0045f8e4  ffd2                 call edx
// 0045f8e6  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0045f8e9  85c0                 test eax, eax
// 0045f8eb  7408                 je 0x45f8f5
// 0045f8ed  8b08                 mov ecx, dword ptr [eax]
// 0045f8ef  8b5108               mov edx, dword ptr [ecx + 8]
// 0045f8f2  50                   push eax
// 0045f8f3  ffd2                 call edx
// 0045f8f5  895e6c               mov dword ptr [esi + 0x6c], ebx
// 0045f8f8  85db                 test ebx, ebx
// 0045f8fa  7463                 je 0x45f95f
// 0045f8fc  8d442410             lea eax, [esp + 0x10]
// 0045f900  50                   push eax
// 0045f901  8bcb                 mov ecx, ebx
// 0045f903  e838b00000           call 0x46a940
// 0045f908  8b08                 mov ecx, dword ptr [eax]
// 0045f90a  83c004               add eax, 4
// 0045f90d  894d00               mov dword ptr [ebp], ecx
// 0045f910  50                   push eax
// 0045f911  8d4d04               lea ecx, [ebp + 4]
// 0045f914  c744245001000000     mov dword ptr [esp + 0x50], 1
// 0045f91c  e88f2cfaff           call 0x4025b0
// 0045f921  8b442414             mov eax, dword ptr [esp + 0x14]
// 0045f925  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0045f92d  85c0                 test eax, eax
// 0045f92f  7435                 je 0x45f966
// 0045f931  8bf8                 mov edi, eax
// 0045f933  83c004               add eax, 4
// 0045f936  83caff               or edx, 0xffffffff
// 0045f939  f00fc110             lock xadd dword ptr [eax], edx
// 0045f93d  7527                 jne 0x45f966
// 0045f93f  8b07                 mov eax, dword ptr [edi]
// 0045f941  8b5004               mov edx, dword ptr [eax + 4]
// 0045f944  8bcf                 mov ecx, edi
// 0045f946  ffd2                 call edx
// 0045f948  8d4708               lea eax, [edi + 8]
// 0045f94b  83c9ff               or ecx, 0xffffffff
// 0045f94e  f00fc108             lock xadd dword ptr [eax], ecx
// 0045f952  7512                 jne 0x45f966
// 0045f954  8b17                 mov edx, dword ptr [edi]
// 0045f956  8b4208               mov eax, dword ptr [edx + 8]
// 0045f959  8bcf                 mov ecx, edi
// 0045f95b  ffd0                 call eax
// 0045f95d  eb07                 jmp 0x45f966
// 0045f95f  8bcd                 mov ecx, ebp
// 0045f961  e81a75ffff           call 0x456e80
// 0045f966  837d0000             cmp dword ptr [ebp], 0
// 0045f96a  0f8445020000         je 0x45fbb5
// 0045f970  8b5500               mov edx, dword ptr [ebp]
// 0045f973  83ec08               sub esp, 8
// 0045f976  8bcc                 mov ecx, esp
// 0045f978  8911                 mov dword ptr [ecx], edx
// 0045f97a  8b4504               mov eax, dword ptr [ebp + 4]
// 0045f97d  8964245c             mov dword ptr [esp + 0x5c], esp
// 0045f981  894104               mov dword ptr [ecx + 4], eax
// 0045f984  85c0                 test eax, eax
// 0045f986  740c                 je 0x45f994
// 0045f988  83c004               add eax, 4
// 0045f98b  b901000000           mov ecx, 1
// 0045f990  f00fc108             lock xadd dword ptr [eax], ecx
// 0045f994  8d4c2424             lea ecx, [esp + 0x24]
// 0045f998  e8a321fbff           call 0x411b40
// 0045f99d  80be9c00000000       cmp byte ptr [esi + 0x9c], 0
// 0045f9a4  bb02000000           mov ebx, 2
// 0045f9a9  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0045f9ad  754c                 jne 0x45f9fb
// 0045f9af  6894010000           push 0x194
// 0045f9b4  e8670f2400           call 0x6a0920
// 0045f9b9  83c404               add esp, 4
// 0045f9bc  89442454             mov dword ptr [esp + 0x54], eax
// 0045f9c0  c644244c03           mov byte ptr [esp + 0x4c], 3
// 0045f9c5  85c0                 test eax, eax
// 0045f9c7  740e                 je 0x45f9d7
// 0045f9c9  8b5500               mov edx, dword ptr [ebp]
// 0045f9cc  52                   push edx
// 0045f9cd  56                   push esi
// 0045f9ce  8bc8                 mov ecx, eax
// 0045f9d0  e81b970000           call 0x4690f0
// 0045f9d5  eb02                 jmp 0x45f9d9
// 0045f9d7  33c0                 xor eax, eax
// 0045f9d9  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0045f9df  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0045f9e4  898684000000         mov dword ptr [esi + 0x84], eax
// 0045f9ea  85c9                 test ecx, ecx
// 0045f9ec  740d                 je 0x45f9fb
// 0045f9ee  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0045f9f1  8b4204               mov eax, dword ptr [edx + 4]
// 0045f9f4  83c128               add ecx, 0x28
// 0045f9f7  6a01                 push 1
// 0045f9f9  ffd0                 call eax
// 0045f9fb  8b4d00               mov ecx, dword ptr [ebp]
// 0045f9fe  85c9                 test ecx, ecx
// 0045fa00  7407                 je 0x45fa09
// 0045fa02  e8e936ffff           call 0x4530f0
// 0045fa07  eb02                 jmp 0x45fa0b
// 0045fa09  33c0                 xor eax, eax
// 0045fa0b  50                   push eax
// 0045fa0c  8d4c2414             lea ecx, [esp + 0x14]
// 0045fa10  51                   push ecx
// 0045fa11  e82a901b00           call 0x618a40
// 0045fa16  83c408               add esp, 8
// 0045fa19  8b10                 mov edx, dword ptr [eax]
// 0045fa1b  83c004               add eax, 4
// 0045fa1e  50                   push eax
// 0045fa1f  8d4e7c               lea ecx, [esi + 0x7c]
// 0045fa22  c644245004           mov byte ptr [esp + 0x50], 4
// 0045fa27  895678               mov dword ptr [esi + 0x78], edx
// 0045fa2a  e8812bfaff           call 0x4025b0
// 0045fa2f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0045fa33  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0045fa38  85c0                 test eax, eax
// 0045fa3a  742c                 je 0x45fa68
// 0045fa3c  8bf8                 mov edi, eax
// 0045fa3e  83c004               add eax, 4
// 0045fa41  83c9ff               or ecx, 0xffffffff
// 0045fa44  f00fc108             lock xadd dword ptr [eax], ecx
// 0045fa48  751e                 jne 0x45fa68
// 0045fa4a  8b17                 mov edx, dword ptr [edi]
// 0045fa4c  8b4204               mov eax, dword ptr [edx + 4]
// 0045fa4f  8bcf                 mov ecx, edi
// 0045fa51  ffd0                 call eax
// 0045fa53  8d4f08               lea ecx, [edi + 8]
// 0045fa56  83caff               or edx, 0xffffffff
// 0045fa59  f00fc111             lock xadd dword ptr [ecx], edx
// 0045fa5d  7509                 jne 0x45fa68
// 0045fa5f  8b07                 mov eax, dword ptr [edi]
// 0045fa61  8b5008               mov edx, dword ptr [eax + 8]
// 0045fa64  8bcf                 mov ecx, edi
// 0045fa66  ffd2                 call edx
// 0045fa68  6a00                 push 0
// 0045fa6a  e8e132fbff           call 0x412d50
// 0045fa6f  8bc8                 mov ecx, eax
// 0045fa71  e85a98feff           call 0x4492d0
// 0045fa76  8bce                 mov ecx, esi
// 0045fa78  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 0045fa7b  7507                 jne 0x45fa84
// 0045fa7d  e8ceddffff           call 0x45d850
// 0045fa82  eb05                 jmp 0x45fa89
// 0045fa84  e817b9ffff           call 0x45b3a0
// 0045fa89  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0045fa8f  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0045fa95  50                   push eax
// 0045fa96  e865ef1600           call 0x5cea00
// 0045fa9b  d9ee                 fldz 
// 0045fa9d  8b4654               mov eax, dword ptr [esi + 0x54]
// 0045faa0  8b5004               mov edx, dword ptr [eax + 4]
// 0045faa3  8d7e54               lea edi, [esi + 0x54]
// 0045faa6  83ec08               sub esp, 8
// 0045faa9  8bcf                 mov ecx, edi
// 0045faab  dd1c24               fstp qword ptr [esp]
// 0045faae  ffd2                 call edx
// 0045fab0  8bce                 mov ecx, esi
// 0045fab2  e8d9cdffff           call 0x45c890
// 0045fab7  8b4d00               mov ecx, dword ptr [ebp]
// 0045faba  85c9                 test ecx, ecx
// 0045fabc  7407                 je 0x45fac5
// 0045fabe  e85de3ffff           call 0x45de20
// 0045fac3  eb02                 jmp 0x45fac7
// 0045fac5  33c0                 xor eax, eax
// 0045fac7  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0045facd  898830010000         mov dword ptr [eax + 0x130], ecx
// 0045fad3  8b4d00               mov ecx, dword ptr [ebp]
// 0045fad6  85c9                 test ecx, ecx
// 0045fad8  7409                 je 0x45fae3
// 0045fada  e8318bffff           call 0x458610
// 0045fadf  8bd8                 mov ebx, eax
// 0045fae1  eb02                 jmp 0x45fae5
// 0045fae3  33db                 xor ebx, ebx
// 0045fae5  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0045faeb  8b01                 mov eax, dword ptr [ecx]
// 0045faed  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0045faf0  ffd2                 call edx
// 0045faf2  50                   push eax
// 0045faf3  8d442414             lea eax, [esp + 0x14]
// 0045faf7  50                   push eax
// 0045faf8  e833fcffff           call 0x45f730
// 0045fafd  83c408               add esp, 8
// 0045fb00  8b08                 mov ecx, dword ptr [eax]
// 0045fb02  83c004               add eax, 4
// 0045fb05  894e64               mov dword ptr [esi + 0x64], ecx
// 0045fb08  50                   push eax
// 0045fb09  8d4e68               lea ecx, [esi + 0x68]
// 0045fb0c  c644245005           mov byte ptr [esp + 0x50], 5
// 0045fb11  e89a2afaff           call 0x4025b0
// 0045fb16  8b442414             mov eax, dword ptr [esp + 0x14]
// 0045fb1a  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0045fb1f  85c0                 test eax, eax
// 0045fb21  742e                 je 0x45fb51
// 0045fb23  8be8                 mov ebp, eax
// 0045fb25  83c004               add eax, 4
// 0045fb28  83caff               or edx, 0xffffffff
// 0045fb2b  f00fc110             lock xadd dword ptr [eax], edx
// 0045fb2f  7520                 jne 0x45fb51
// 0045fb31  8b4500               mov eax, dword ptr [ebp]
// 0045fb34  8b5004               mov edx, dword ptr [eax + 4]
// 0045fb37  8bcd                 mov ecx, ebp
// 0045fb39  ffd2                 call edx
// 0045fb3b  8d4508               lea eax, [ebp + 8]
// 0045fb3e  83c9ff               or ecx, 0xffffffff
// 0045fb41  f00fc108             lock xadd dword ptr [eax], ecx
// 0045fb45  750a                 jne 0x45fb51
// 0045fb47  8b5500               mov edx, dword ptr [ebp]
// 0045fb4a  8b4208               mov eax, dword ptr [edx + 8]
// 0045fb4d  8bcd                 mov ecx, ebp
// 0045fb4f  ffd0                 call eax
// 0045fb51  6850878100           push 0x818750
// 0045fb56  8d4c242c             lea ecx, [esp + 0x2c]
// 0045fb5a  ff1558248000         call dword ptr [0x802458]
// 0045fb60  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0045fb63  8b11                 mov edx, dword ptr [ecx]
// 0045fb65  8b5204               mov edx, dword ptr [edx + 4]
// 0045fb68  8d442428             lea eax, [esp + 0x28]
// 0045fb6c  50                   push eax
// 0045fb6d  c644245006           mov byte ptr [esp + 0x50], 6
// 0045fb72  ffd2                 call edx
// 0045fb74  8d4c2428             lea ecx, [esp + 0x28]
// 0045fb78  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0045fb7d  ff1568248000         call dword ptr [0x802468]
// 0045fb83  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0045fb86  53                   push ebx
// 0045fb87  e864ad0f00           call 0x55a8f0
// 0045fb8c  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0045fb92  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0045fb95  50                   push eax
// 0045fb96  e8a5a61600           call 0x5ca240
// 0045fb9b  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0045fb9e  57                   push edi
// 0045fb9f  e81c5c0f00           call 0x5557c0
// 0045fba4  8d4c241c             lea ecx, [esp + 0x1c]
// 0045fba8  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0045fbb0  e80b781100           call 0x5773c0
// 0045fbb5  8b7620               mov esi, dword ptr [esi + 0x20]
// 0045fbb8  85f6                 test esi, esi
// 0045fbba  740b                 je 0x45fbc7
// 0045fbbc  6a01                 push 1
// 0045fbbe  6a00                 push 0
// 0045fbc0  56                   push esi
// 0045fbc1  ff15182e8000         call dword ptr [0x802e18]
// 0045fbc7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0045fbcb  5f                   pop edi
// 0045fbcc  5e                   pop esi
// 0045fbcd  5d                   pop ebp
// 0045fbce  64890d00000000       mov dword ptr fs:[0], ecx
// 0045fbd5  5b                   pop ebx
// 0045fbd6  83c440               add esp, 0x40
// 0045fbd9  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    Control* control;
    void* ptr;
};

struct String
{
    char storage[28];
    String(const char*);
    ~String();
};

extern "C" void* __stdcall sub_6A0920(unsigned int);
extern "C" void* __stdcall sub_802E18(void*, int, int);
extern "C" void* __stdcall sub_802458(void*, const char*);
extern "C" void* __stdcall sub_802468(void*);

struct RBX_Stats_Item
{
    void setItem(void* item);
};

void RBX_Stats_Item::setItem(void* item)
{
    char* self = (char*)this;
    void* old = *(void**)(self + 0x6c);
    if (item == old)
        return;

    if (*(void**)(self + 0x70) != 0)
    {
        Shared* sh = (Shared*)(self + 0x70);
        Shared tmp;
        tmp.control = sh->control;
        tmp.ptr = sh->ptr;
        if (tmp.control)
            _InterlockedIncrement(&tmp.control->strong);

        void* a = *(void**)(self + 0x64);
        if (a)
        {
            ((void (__thiscall*)(void*, int))0x55a8f0)(a, 0);
            ((void (__thiscall*)(void*))0x456e80)(self + 0x64);
        }

        void* c = *(void**)(self + 0x70);
        if (c)
        {
            void* r = ((void* (__thiscall*)(void*))0x45dce0)(c);
            if (r)
                *(void**)((char*)r + 0x130) = 0;
        }

        void* g = *(void**)(self + 0xa4);
        if (*(void**)0x96eff4 != g)
        {
            void** vt = *(void***)g;
            ((void (__thiscall*)(void*))vt[38])(g);
            *(void**)0x96eff4 = g;
        }

        void* b = *(void**)(self + 0xb0);
        if (b)
        {
            void** vt = *(void***)b;
            ((void (__thiscall*)(void*, int))vt[0])(b, 1);
        }
        *(void**)(self + 0xb0) = 0;

        ((void (__thiscall*)(void*, void*))0x555830)(self + 0x78, self + 0x54);

        void* d = *(void**)(self + 0x84);
        *(void**)(self + 0x84) = 0;
        if (d)
        {
            void** vt = *(void***)((char*)d + 0x28);
            ((void (__thiscall*)(void*, int))vt[1])((char*)d + 0x28, 1);
        }

        ((void (__thiscall*)(void*))0x456e80)(self + 0x78);
    }

    if (*(void**)(self + 0x6c) != item)
    {
        if (item)
        {
            void** vt = *(void***)item;
            ((void (__thiscall*)(void*, void*))vt[1])(item, item);
        }
        void* o = *(void**)(self + 0x6c);
        if (o)
        {
            void** vt = *(void***)o;
            ((void (__thiscall*)(void*, void*))vt[2])(o, o);
        }
        *(void**)(self + 0x6c) = item;
    }

    if (item)
    {
        void* r = ((void* (__thiscall*)(void*, void*))0x46a940)(item, self + 0x10);
        *(void**)(self + 0x70) = *(void**)r;
        ((void (__thiscall*)(void*, void*))0x4025b0)(self + 0x74, (char*)r + 4);
    }
    else
    {
        ((void (__thiscall*)(void*))0x456e80)(self + 0x70);
    }

    if (*(void**)(self + 0x70) == 0)
        goto done;

    {
        Shared* sh = (Shared*)(self + 0x70);
        Shared tmp;
        tmp.control = sh->control;
        tmp.ptr = sh->ptr;
        if (tmp.control)
            _InterlockedIncrement(&tmp.control->strong);

        if (*(unsigned char*)(self + 0x9c) == 0)
        {
            void* mem = sub_6A0920(0x194);
            void* obj = 0;
            if (mem)
                obj = ((void* (__thiscall*)(void*, void*, void*))0x4690f0)(mem, self, *(void**)(self + 0x70));
            void* old84 = *(void**)(self + 0x84);
            *(void**)(self + 0x84) = obj;
            if (old84)
            {
                void** vt = *(void***)((char*)old84 + 0x28);
                ((void (__thiscall*)(void*, int))vt[1])((char*)old84 + 0x28, 1);
            }
        }

        void* p = *(void**)(self + 0x70);
        void* arg = 0;
        if (p)
            arg = ((void* (__thiscall*)(void*))0x4530f0)(p);
        void* r = ((void* (__cdecl*)(void*, void*))0x618a40)(self + 0x10, arg);
        *(void**)(self + 0x78) = *(void**)r;
        ((void (__thiscall*)(void*, void*))0x4025b0)(self + 0x7c, (char*)r + 4);

        void* q = ((void* (__cdecl*)(int))0x412d50)(0);
        ((void (__thiscall*)(void*))0x4492d0)(q);

        if (*(int*)(self + 0x5c) == 2)
            ((void (__thiscall*)(void*))0x45d850)(self);
        else
            ((void (__thiscall*)(void*))0x45b3a0)(self);

        ((void (__thiscall*)(void*, void*))0x5cea00)(*(void**)(self + 0x84), *(void**)(self + 0xb4));

        void** vt = *(void***)(self + 0x54);
        ((void (__thiscall*)(void*, double))vt[1])(self + 0x54, 0.0);

        ((void (__thiscall*)(void*))0x45c890)(self);

        void* e = 0;
        if (*(void**)(self + 0x70))
            e = ((void* (__thiscall*)(void*))0x45de20)(*(void**)(self + 0x70));
        *(void**)((char*)e + 0x130) = *(void**)(self + 0x84);

        void* ebx = 0;
        if (*(void**)(self + 0x70))
            ebx = ((void* (__thiscall*)(void*))0x458610)(*(void**)(self + 0x70));

        void* b0 = *(void**)(self + 0xb0);
        void** bvt = *(void***)b0;
        void* r2 = ((void* (__thiscall*)(void*))bvt[7])(b0);
        void* r3 = ((void* (__cdecl*)(void*, void*))0x45f730)(self + 0x10, r2);
        *(void**)(self + 0x64) = *(void**)r3;
        ((void (__thiscall*)(void*, void*))0x4025b0)(self + 0x68, (char*)r3 + 4);

        String s("Render");
        void* c64 = *(void**)(self + 0x64);
        void** cvt = *(void***)c64;
        ((void (__thiscall*)(void*, void*))cvt[1])(c64, &s);
        sub_802468(&s);

        ((void (__thiscall*)(void*, void*))0x55a8f0)(*(void**)(self + 0x64), ebx);
        ((void (__thiscall*)(void*, void*))0x5ca240)(*(void**)(self + 0x64), *(void**)(self + 0x98));
        ((void (__thiscall*)(void*, void*))0x5557c0)(*(void**)(self + 0x78), self + 0x54);
    }

done:
    {
        void* p = *(void**)(self + 0x20);
        if (p)
            sub_802E18(p, 0, 1);
    }
}
