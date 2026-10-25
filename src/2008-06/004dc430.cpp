// from server: 100% by colin
// roc 2008-06 004dc430  unit: RBX::ViewNew::ViewG3D  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dc430
//
// 004dc430  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dc434  8b542404             mov edx, dword ptr [esp + 4]
// 004dc438  e823ffffff           call 0x4dc360
// 004dc43d  85c0                 test eax, eax
// 004dc43f  7d05                 jge 0x4dc446
// 004dc441  b001                 mov al, 1
// 004dc443  c20800               ret 8
// 004dc446  7e05                 jle 0x4dc44d
// 004dc448  32c0                 xor al, al
// 004dc44a  c20800               ret 8
// 004dc44d  8b420c               mov eax, dword ptr [edx + 0xc]
// 004dc450  56                   push esi
// 004dc451  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004dc454  3bc6                 cmp eax, esi
// 004dc456  7306                 jae 0x4dc45e
// 004dc458  b001                 mov al, 1
// 004dc45a  5e                   pop esi
// 004dc45b  c20800               ret 8
// 004dc45e  7606                 jbe 0x4dc466
// 004dc460  32c0                 xor al, al
// 004dc462  5e                   pop esi
// 004dc463  c20800               ret 8
// 004dc466  8b4210               mov eax, dword ptr [edx + 0x10]
// 004dc469  3b4110               cmp eax, dword ptr [ecx + 0x10]
// 004dc46c  5e                   pop esi
// 004dc46d  0f9cc0               setl al
// 004dc470  c20800               ret 8

struct S {
    float position[3];
    unsigned int key;
    int value;
    bool less(const S* left, const S* right);
};
static __declspec(noinline) int __fastcall compare(const S* p, const S* q)
{
    if (p->position[0] < q->position[0]) return -1;
    if (p->position[0] > q->position[0]) return 1;
    if (p->position[1] < q->position[1]) return -1;
    if (p->position[1] > q->position[1]) return 1;
    if (p->position[2] < q->position[2]) return -1;
    if (p->position[2] > q->position[2]) return 1;
    return 0;
}
bool S::less(const S* left, const S* right)
{
    int result = compare(left, right);
    if (result < 0) return true;
    if (result > 0) return false;
    unsigned int a = left->key;
    unsigned int b = right->key;
    if (a < b) return true;
    if (a > b) return false;
    if (left->value < right->value) return true;
    return false;
}
