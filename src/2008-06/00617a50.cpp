// from server: 50% by colin
// from server: 44% by colin
// roc 2008-06 00617a50  unit: RBX::ArrowTool  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00617a50
//
// 00617a50  83ec10               sub esp, 0x10
// 00617a53  53                   push ebx
// 00617a54  55                   push ebp
// 00617a55  56                   push esi
// 00617a56  8bf1                 mov esi, ecx
// 00617a58  57                   push edi
// 00617a59  8d6e1c               lea ebp, [esi + 0x1c]
// 00617a5c  6a01                 push 1
// 00617a5e  8bcd                 mov ecx, ebp
// 00617a60  e85ba2f6ff           call 0x581cc0
// 00617a65  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00617a68  8b11                 mov edx, dword ptr [ecx]
// 00617a6a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00617a6e  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00617a71  8b19                 mov ebx, dword ptr [ecx]
// 00617a73  83c634               add esi, 0x34
// 00617a76  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00617a7a  c644242400           mov byte ptr [esp + 0x24], 0
// 00617a7f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00617a83  53                   push ebx
// 00617a84  50                   push eax
// 00617a85  8b4618               mov eax, dword ptr [esi + 0x18]
// 00617a88  50                   push eax
// 00617a89  8b06                 mov eax, dword ptr [esi]
// 00617a8b  50                   push eax
// 00617a8c  89542424             mov dword ptr [esp + 0x24], edx
// 00617a90  8b442424             mov eax, dword ptr [esp + 0x24]
// 00617a94  8b17                 mov edx, dword ptr [edi]
// 00617a96  50                   push eax
// 00617a97  8b06                 mov eax, dword ptr [esi]
// 00617a99  50                   push eax
// 00617a9a  51                   push ecx
// 00617a9b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00617a9f  52                   push edx
// 00617aa0  51                   push ecx
// 00617aa1  52                   push edx
// 00617aa2  8d54244c             lea edx, [esp + 0x4c]
// 00617aa6  52                   push edx
// 00617aa7  e844ebffff           call 0x6165f0
// 00617aac  83c42c               add esp, 0x2c
// 00617aaf  6a01                 push 1
// 00617ab1  8bcd                 mov ecx, ebp
// 00617ab3  e808a2f6ff           call 0x581cc0
// 00617ab8  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00617abb  8b6d00               mov ebp, dword ptr [ebp]
// 00617abe  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00617ac1  8b17                 mov edx, dword ptr [edi]
// 00617ac3  8b19                 mov ebx, dword ptr [ecx]
// 00617ac5  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00617ac9  c644242400           mov byte ptr [esp + 0x24], 0
// 00617ace  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00617ad2  55                   push ebp
// 00617ad3  50                   push eax
// 00617ad4  8b4618               mov eax, dword ptr [esi + 0x18]
// 00617ad7  51                   push ecx
// 00617ad8  52                   push edx
// 00617ad9  53                   push ebx
// 00617ada  52                   push edx
// 00617adb  50                   push eax
// 00617adc  8b06                 mov eax, dword ptr [esi]
// 00617ade  50                   push eax
// 00617adf  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00617ae3  50                   push eax
// 00617ae4  8b06                 mov eax, dword ptr [esi]
// 00617ae6  50                   push eax
// 00617ae7  8d4c244c             lea ecx, [esp + 0x4c]
// 00617aeb  51                   push ecx
// 00617aec  e8afecffff           call 0x6167a0
// 00617af1  83c42c               add esp, 0x2c
// 00617af4  3bf7                 cmp esi, edi
// 00617af6  741f                 je 0x617b17
// 00617af8  8b4618               mov eax, dword ptr [esi + 0x18]
// 00617afb  8b0e                 mov ecx, dword ptr [esi]
// 00617afd  8b10                 mov edx, dword ptr [eax]
// 00617aff  50                   push eax
// 00617b00  51                   push ecx
// 00617b01  52                   push edx
// 00617b02  51                   push ecx
// 00617b03  8d542428             lea edx, [esp + 0x28]
// 00617b07  52                   push edx
// 00617b08  8bce                 mov ecx, esi
// 00617b0a  e821320300           call 0x64ad30
// 00617b0f  57                   push edi
// 00617b10  8bce                 mov ecx, esi
// 00617b12  e83945f9ff           call 0x5ac050
// 00617b17  5f                   pop edi
// 00617b18  5e                   pop esi
// 00617b19  5d                   pop ebp
// 00617b1a  5b                   pop ebx
// 00617b1b  83c410               add esp, 0x10
// 00617b1e  c20400               ret 4
#include <intrin.h>




struct Node {
    unsigned char padding[12];
    unsigned int value;
};

struct Tree {
    unsigned char padding[24];
    Node* sentinel;
};

struct Iterator {
    Tree* owner;
    Node* node;
    Iterator(Tree* o, Node* n) : owner(o), node(n) {}
};

struct Output {
    unsigned char value;
    Output() : value(0) {}
};

struct Predicate {
    char storage[24];
    int get(int);
};

extern Output __cdecl difference1(
    Iterator, Iterator, Iterator, Iterator, int, Output);
extern Output __cdecl difference2(
    Iterator, Iterator, Iterator, Iterator, int, Output);

struct Tree2 {
    void* owner;
    char padding[20];
    Node* sentinel;
    Iterator erase(Iterator first, Iterator last);
    Tree2& assign(const Tree2& other);
};

struct S {
    char padding[28];
    Predicate predicate;
    Tree2 tree;

    void f(Tree2* other);
};

void S::f(Tree2* other)
{
    Predicate* p = &predicate;
    int compare = p->get(1);
    Tree2* t = &tree;
    _ReadWriteBarrier();

    difference1(
        Iterator((Tree*)other->owner, other->sentinel),
        Iterator((Tree*)other->owner, other->sentinel),
        Iterator((Tree*)t->owner, t->sentinel),
        Iterator((Tree*)t->owner, t->sentinel),
        compare, Output());

    compare = p->get(1);

    difference2(
        Iterator((Tree*)t->owner, t->sentinel),
        Iterator((Tree*)t->owner, t->sentinel),
        Iterator((Tree*)other->owner, other->sentinel),
        Iterator((Tree*)other->owner, other->sentinel),
        compare, Output());

    if (t != other) {
        t->erase(
            Iterator((Tree*)t->owner, t->sentinel),
            Iterator((Tree*)t->owner, t->sentinel));
        t->assign(*other);
    }
}
