// from server: 42% by atomic.potato
// roc 2010-06 00465650  unit: CRobloxView  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00465650
//
// 00465650  83ec0c               sub esp, 0xc
// 00465653  53                   push ebx
// 00465654  8b1d0ca99e00         mov ebx, dword ptr [0x9ea90c]
// 0046565a  55                   push ebp
// 0046565b  56                   push esi
// 0046565c  8bf1                 mov esi, ecx
// 0046565e  8baea4000000         mov ebp, dword ptr [esi + 0xa4]
// 00465664  57                   push edi
// 00465665  39aea0000000         cmp dword ptr [esi + 0xa0], ebp
// 0046566b  7602                 jbe 0x46566f
// 0046566d  ffd3                 call ebx
// 0046566f  8bbea0000000         mov edi, dword ptr [esi + 0xa0]
// 00465675  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0046567b  89442414             mov dword ptr [esp + 0x14], eax
// 0046567f  3bbea4000000         cmp edi, dword ptr [esi + 0xa4]
// 00465685  7602                 jbe 0x465689
// 00465687  ffd3                 call ebx
// 00465689  8bb694000000         mov esi, dword ptr [esi + 0x94]
// 0046568f  90                   nop 
// 00465690  85f6                 test esi, esi
// 00465692  7406                 je 0x46569a
// 00465694  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00465698  7402                 je 0x46569c
// 0046569a  ffd3                 call ebx
// 0046569c  3bfd                 cmp edi, ebp
// 0046569e  7474                 je 0x465714
// 004656a0  85f6                 test esi, esi
// 004656a2  7564                 jne 0x465708
// 004656a4  ffd3                 call ebx
// 004656a6  33c0                 xor eax, eax
// 004656a8  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004656ab  7202                 jb 0x4656af
// 004656ad  ffd3                 call ebx
// 004656af  833f00               cmp dword ptr [edi], 0
// 004656b2  7440                 je 0x4656f4
// 004656b4  85f6                 test esi, esi
// 004656b6  7554                 jne 0x46570c
// 004656b8  ffd3                 call ebx
// 004656ba  33c0                 xor eax, eax
// 004656bc  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004656bf  7202                 jb 0x4656c3
// 004656c1  ffd3                 call ebx
// 004656c3  8b17                 mov edx, dword ptr [edi]
// 004656c5  83ec08               sub esp, 8
// 004656c8  8bcc                 mov ecx, esp
// 004656ca  8911                 mov dword ptr [ecx], edx
// 004656cc  8b4704               mov eax, dword ptr [edi + 4]
// 004656cf  89642418             mov dword ptr [esp + 0x18], esp
// 004656d3  894104               mov dword ptr [ecx + 4], eax
// 004656d6  85c0                 test eax, eax
// 004656d8  740c                 je 0x4656e6
// 004656da  83c004               add eax, 4
// 004656dd  b901000000           mov ecx, 1
// 004656e2  f00fc108             lock xadd dword ptr [eax], ecx
// 004656e6  8b542430             mov edx, dword ptr [esp + 0x30]
// 004656ea  52                   push edx
// 004656eb  8d4c242c             lea ecx, [esp + 0x2c]
// 004656ef  e84c1d0800           call 0x4e7440
// 004656f4  85f6                 test esi, esi
// 004656f6  7518                 jne 0x465710
// 004656f8  ffd3                 call ebx
// 004656fa  33c0                 xor eax, eax
// 004656fc  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004656ff  7202                 jb 0x465703
// 00465701  ffd3                 call ebx
// 00465703  83c708               add edi, 8
// 00465706  eb88                 jmp 0x465690
// 00465708  8b06                 mov eax, dword ptr [esi]
// 0046570a  eb9c                 jmp 0x4656a8
// 0046570c  8b06                 mov eax, dword ptr [esi]
// 0046570e  ebac                 jmp 0x4656bc
// 00465710  8b06                 mov eax, dword ptr [esi]
// 00465712  ebe8                 jmp 0x4656fc
// 00465714  5f                   pop edi
// 00465715  5e                   pop esi
// 00465716  5d                   pop ebp
// 00465717  5b                   pop ebx
// 00465718  83c40c               add esp, 0xc
// 0046571b  c21000               ret 0x10

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    int a;
    int b;
};

struct Node {
    Inner* first;
    Inner* second;
};

struct Holder {
    char pad[0x10];
    int field10;
};

struct View {
    char pad0[0x94];
    Node* begin;
    char pad1[0x4];
    Node* end;
    char pad2[0x4];
    Node* cap;

    void func(int a, int b, int c, int d);
};

struct Sink {
    void push_back(Node*);
};

extern "C" void __cdecl sub_4E7440(Sink*, Node*);

void View::func(int a, int b, int c, int d)
{
    Node* first = this->begin;
    Node* last = this->end;
    if (this->cap < last)
        _invalid_parameter_noinfo();
    Node* it = this->end;
    Node* base = this->begin;
    if (it > this->cap)
        _invalid_parameter_noinfo();
    Node* cur = this->begin;
    while (cur != 0 && cur != base) {
        if (cur == last)
            break;
        if (cur == 0)
            _invalid_parameter_noinfo();
        if (cur->first != 0) {
            Node tmp;
            tmp.first = cur->first;
            tmp.second = cur->second;
            if (tmp.second != 0)
                _InterlockedExchangeAdd((volatile long*)((char*)tmp.second + 4), 1);
            sub_4E7440((Sink*)&a, &tmp);
        }
        cur = (Node*)((char*)cur + 8);
    }
}
