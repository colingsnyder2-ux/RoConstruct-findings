// from server: 32% by atomic.potato
// roc 2007-08 0070db30  unit: CXTColorLum  size: 613 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070db30
//
// 0070db30  6aff                 push -1
// 0070db32  68b0a07600           push 0x76a0b0
// 0070db37  64a100000000         mov eax, dword ptr fs:[0]
// 0070db3d  50                   push eax
// 0070db3e  51                   push ecx
// 0070db3f  53                   push ebx
// 0070db40  56                   push esi
// 0070db41  57                   push edi
// 0070db42  a188518b00           mov eax, dword ptr [0x8b5188]
// 0070db47  33c4                 xor eax, esp
// 0070db49  50                   push eax
// 0070db4a  8d442414             lea eax, [esp + 0x14]
// 0070db4e  64a300000000         mov dword ptr fs:[0], eax
// 0070db54  8bf1                 mov esi, ecx
// 0070db56  89742410             mov dword ptr [esp + 0x10], esi
// 0070db5a  6a30                 push 0x30
// 0070db5c  33ff                 xor edi, edi
// 0070db5e  57                   push edi
// 0070db5f  6861240000           push 0x2461
// 0070db64  e89fac0200           call 0x738808
// 0070db69  8d8e88000000         lea ecx, [esi + 0x88]
// 0070db6f  897c241c             mov dword ptr [esp + 0x1c], edi
// 0070db73  c706b4de7d00         mov dword ptr [esi], 0x7ddeb4
// 0070db79  e872f0ffff           call 0x70cbf0
// 0070db7e  8d8e10010000         lea ecx, [esi + 0x110]
// 0070db84  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0070db89  e852f6ffff           call 0x70d1e0
// 0070db8e  8d9ea0010000         lea ebx, [esi + 0x1a0]
// 0070db94  8bcb                 mov ecx, ebx
// 0070db96  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0070db9b  e83a2af2ff           call 0x6305da
// 0070dba0  c70374c67c00         mov dword ptr [ebx], 0x7cc674
// 0070dba6  8d9ef4010000         lea ebx, [esi + 0x1f4]
// 0070dbac  8bcb                 mov ecx, ebx
// 0070dbae  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0070dbb3  e8222af2ff           call 0x6305da
// 0070dbb8  c70374c67c00         mov dword ptr [ebx], 0x7cc674
// 0070dbbe  8d9e48020000         lea ebx, [esi + 0x248]
// 0070dbc4  8bcb                 mov ecx, ebx
// 0070dbc6  c644241c04           mov byte ptr [esp + 0x1c], 4
// 0070dbcb  e80a2af2ff           call 0x6305da
// 0070dbd0  c70374c67c00         mov dword ptr [ebx], 0x7cc674
// 0070dbd6  8d9e9c020000         lea ebx, [esi + 0x29c]
// 0070dbdc  8bcb                 mov ecx, ebx
// 0070dbde  c644241c05           mov byte ptr [esp + 0x1c], 5
// 0070dbe3  e8f229f2ff           call 0x6305da
// 0070dbe8  c70374c67c00         mov dword ptr [ebx], 0x7cc674
// 0070dbee  8d9ef0020000         lea ebx, [esi + 0x2f0]
// 0070dbf4  8bcb                 mov ecx, ebx
// 0070dbf6  c644241c06           mov byte ptr [esp + 0x1c], 6
// 0070dbfb  e8da29f2ff           call 0x6305da
// 0070dc00  c70374c67c00         mov dword ptr [ebx], 0x7cc674
// 0070dc06  8d9e44030000         lea ebx, [esi + 0x344]
// 0070dc0c  8bcb                 mov ecx, ebx
// 0070dc0e  c644241c07           mov byte ptr [esp + 0x1c], 7
// 0070dc13  e8c229f2ff           call 0x6305da
// 0070dc18  c70374c67c00         mov dword ptr [ebx], 0x7cc674
// 0070dc1e  8d9e98030000         lea ebx, [esi + 0x398]
// 0070dc24  8bcb                 mov ecx, ebx
// 0070dc26  c644241c08           mov byte ptr [esp + 0x1c], 8
// 0070dc2b  e8aa29f2ff           call 0x6305da
// 0070dc30  c70364d97d00         mov dword ptr [ebx], 0x7dd964
// 0070dc36  8d9eec030000         lea ebx, [esi + 0x3ec]
// 0070dc3c  8bcb                 mov ecx, ebx
// 0070dc3e  c644241c09           mov byte ptr [esp + 0x1c], 9
// 0070dc43  e89229f2ff           call 0x6305da
// 0070dc48  c70364d97d00         mov dword ptr [ebx], 0x7dd964
// 0070dc4e  8d9e40040000         lea ebx, [esi + 0x440]
// 0070dc54  8bcb                 mov ecx, ebx
// 0070dc56  c644241c0a           mov byte ptr [esp + 0x1c], 0xa
// 0070dc5b  e87a29f2ff           call 0x6305da
// 0070dc60  c70364d97d00         mov dword ptr [ebx], 0x7dd964
// 0070dc66  8d9e94040000         lea ebx, [esi + 0x494]
// 0070dc6c  8bcb                 mov ecx, ebx
// 0070dc6e  c644241c0b           mov byte ptr [esp + 0x1c], 0xb
// 0070dc73  e86229f2ff           call 0x6305da
// 0070dc78  c70364d97d00         mov dword ptr [ebx], 0x7dd964
// 0070dc7e  8d9ee8040000         lea ebx, [esi + 0x4e8]
// 0070dc84  8bcb                 mov ecx, ebx
// 0070dc86  c644241c0c           mov byte ptr [esp + 0x1c], 0xc
// 0070dc8b  e84a29f2ff           call 0x6305da
// 0070dc90  c70364d97d00         mov dword ptr [ebx], 0x7dd964
// 0070dc96  8d9e3c050000         lea ebx, [esi + 0x53c]
// 0070dc9c  8bcb                 mov ecx, ebx
// 0070dc9e  c644241c0d           mov byte ptr [esp + 0x1c], 0xd
// 0070dca3  e83229f2ff           call 0x6305da
// 0070dca8  c70364d97d00         mov dword ptr [ebx], 0x7dd964
// 0070dcae  8d9e90050000         lea ebx, [esi + 0x590]
// 0070dcb4  8bcb                 mov ecx, ebx
// 0070dcb6  c644241c0e           mov byte ptr [esp + 0x1c], 0xe
// 0070dcbb  e81a29f2ff           call 0x6305da
// 0070dcc0  c7031c5c7c00         mov dword ptr [ebx], 0x7c5c1c
// 0070dcc6  8d9ee4050000         lea ebx, [esi + 0x5e4]
// 0070dccc  8bcb                 mov ecx, ebx
// 0070dcce  c644241c0f           mov byte ptr [esp + 0x1c], 0xf
// 0070dcd3  e80229f2ff           call 0x6305da
// 0070dcd8  c7031c5c7c00         mov dword ptr [ebx], 0x7c5c1c
// 0070dcde  8d9e38060000         lea ebx, [esi + 0x638]
// 0070dce4  8bcb                 mov ecx, ebx
// 0070dce6  c644241c10           mov byte ptr [esp + 0x1c], 0x10
// 0070dceb  e8ea28f2ff           call 0x6305da
// 0070dcf0  c7031c5c7c00         mov dword ptr [ebx], 0x7c5c1c
// 0070dcf6  8d9e8c060000         lea ebx, [esi + 0x68c]
// 0070dcfc  8bcb                 mov ecx, ebx
// 0070dcfe  c644241c11           mov byte ptr [esp + 0x1c], 0x11
// 0070dd03  e8d228f2ff           call 0x6305da
// 0070dd08  c7031c5c7c00         mov dword ptr [ebx], 0x7c5c1c
// 0070dd0e  8d9ee0060000         lea ebx, [esi + 0x6e0]
// 0070dd14  8bcb                 mov ecx, ebx
// 0070dd16  c644241c12           mov byte ptr [esp + 0x1c], 0x12
// 0070dd1b  e8ba28f2ff           call 0x6305da
// 0070dd20  c7031c5c7c00         mov dword ptr [ebx], 0x7c5c1c
// 0070dd26  8d9e34070000         lea ebx, [esi + 0x734]
// 0070dd2c  8bcb                 mov ecx, ebx
// 0070dd2e  c644241c13           mov byte ptr [esp + 0x1c], 0x13
// 0070dd33  e8a228f2ff           call 0x6305da
// 0070dd38  c7031c5c7c00         mov dword ptr [ebx], 0x7c5c1c
// 0070dd3e  8bce                 mov ecx, esi
// 0070dd40  c644241c14           mov byte ptr [esp + 0x1c], 0x14
// 0070dd45  e8cea90200           call 0x738718
// 0070dd4a  83c004               add eax, 4
// 0070dd4d  8320df               and dword ptr [eax], 0xffffffdf
// 0070dd50  8b442424             mov eax, dword ptr [esp + 0x24]
// 0070dd54  8986a0070000         mov dword ptr [esi + 0x7a0], eax
// 0070dd5a  89be88070000         mov dword ptr [esi + 0x788], edi
// 0070dd60  89be8c070000         mov dword ptr [esi + 0x78c], edi
// 0070dd66  89be90070000         mov dword ptr [esi + 0x790], edi
// 0070dd6c  89be94070000         mov dword ptr [esi + 0x794], edi
// 0070dd72  89be98070000         mov dword ptr [esi + 0x798], edi
// 0070dd78  89be9c070000         mov dword ptr [esi + 0x79c], edi
// 0070dd7e  8bc6                 mov eax, esi
// 0070dd80  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070dd84  64890d00000000       mov dword ptr fs:[0], ecx
// 0070dd8b  59                   pop ecx
// 0070dd8c  5f                   pop edi
// 0070dd8d  5e                   pop esi
// 0070dd8e  5b                   pop ebx
// 0070dd8f  83c410               add esp, 0x10
// 0070dd92  c20400               ret 4

extern "C" {
    void __stdcall sub_738808(int, int, int);
    void __fastcall sub_70cbf0(void*);
    void __fastcall sub_70d1e0(void*);
    void __fastcall sub_6305da(void*);
    void* __stdcall sub_738718();
}

struct CXTColorLum {
    char pad[0x7a4];
    void construct(int);
};

void CXTColorLum::construct(int arg)
{
    sub_738808(0x30, 0, 0x2461);
    *(int*)((char*)this + 0) = 0x7ddeb4;
    sub_70cbf0((char*)this + 0x88);
    sub_70d1e0((char*)this + 0x110);
    sub_6305da((char*)this + 0x1a0);
    *(int*)((char*)this + 0x1a0) = 0x7cc674;
    sub_6305da((char*)this + 0x1f4);
    *(int*)((char*)this + 0x1f4) = 0x7cc674;
    sub_6305da((char*)this + 0x248);
    *(int*)((char*)this + 0x248) = 0x7cc674;
    sub_6305da((char*)this + 0x29c);
    *(int*)((char*)this + 0x29c) = 0x7cc674;
    sub_6305da((char*)this + 0x2f0);
    *(int*)((char*)this + 0x2f0) = 0x7cc674;
    sub_6305da((char*)this + 0x344);
    *(int*)((char*)this + 0x344) = 0x7cc674;
    sub_6305da((char*)this + 0x398);
    *(int*)((char*)this + 0x398) = 0x7dd964;
    sub_6305da((char*)this + 0x3ec);
    *(int*)((char*)this + 0x3ec) = 0x7dd964;
    sub_6305da((char*)this + 0x440);
    *(int*)((char*)this + 0x440) = 0x7dd964;
    sub_6305da((char*)this + 0x494);
    *(int*)((char*)this + 0x494) = 0x7dd964;
    sub_6305da((char*)this + 0x4e8);
    *(int*)((char*)this + 0x4e8) = 0x7dd964;
    sub_6305da((char*)this + 0x53c);
    *(int*)((char*)this + 0x53c) = 0x7dd964;
    sub_6305da((char*)this + 0x590);
    *(int*)((char*)this + 0x590) = 0x7c5c1c;
    sub_6305da((char*)this + 0x5e4);
    *(int*)((char*)this + 0x5e4) = 0x7c5c1c;
    sub_6305da((char*)this + 0x638);
    *(int*)((char*)this + 0x638) = 0x7c5c1c;
    sub_6305da((char*)this + 0x68c);
    *(int*)((char*)this + 0x68c) = 0x7c5c1c;
    sub_6305da((char*)this + 0x6e0);
    *(int*)((char*)this + 0x6e0) = 0x7c5c1c;
    sub_6305da((char*)this + 0x734);
    *(int*)((char*)this + 0x734) = 0x7c5c1c;
    *(int*)((char*)sub_738718() + 4) &= 0xffffffdf;
    *(int*)((char*)this + 0x7a0) = arg;
    *(int*)((char*)this + 0x788) = 0;
    *(int*)((char*)this + 0x78c) = 0;
    *(int*)((char*)this + 0x790) = 0;
    *(int*)((char*)this + 0x794) = 0;
    *(int*)((char*)this + 0x798) = 0;
    *(int*)((char*)this + 0x79c) = 0;
}
