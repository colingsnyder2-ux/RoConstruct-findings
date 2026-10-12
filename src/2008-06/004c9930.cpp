// from server: 79% by king_originala
// roc 2008-06 004c9930  unit: RBX::Network::InterpolatingPhysicsReceiver  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c9930
//
// 004c9930  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c9934  8b4104               mov eax, dword ptr [ecx + 4]
// 004c9937  56                   push esi
// 004c9938  8b742410             mov esi, dword ptr [esp + 0x10]
// 004c993c  57                   push edi
// 004c993d  33ff                 xor edi, edi
// 004c993f  3bc7                 cmp eax, edi
// 004c9941  7426                 je 0x4c9969
// 004c9943  3bc6                 cmp eax, esi
// 004c9945  7422                 je 0x4c9969
// 004c9947  8d442410             lea eax, [esp + 0x10]
// 004c994b  50                   push eax
// 004c994c  e8bfcdffff           call 0x4c6710
// 004c9951  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c9955  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c9959  83c404               add esp, 4
// 004c995c  894108               mov dword ptr [ecx + 8], eax
// 004c995f  3b4e08               cmp ecx, dword ptr [esi + 8]
// 004c9962  7526                 jne 0x4c998a
// 004c9964  894608               mov dword ptr [esi + 8], eax
// 004c9967  eb21                 jmp 0x4c998a
// 004c9969  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c996d  894104               mov dword ptr [ecx + 4], eax
// 004c9970  3bce                 cmp ecx, esi
// 004c9972  750e                 jne 0x4c9982
// 004c9974  8b16                 mov edx, dword ptr [esi]
// 004c9976  83e201               and edx, 1
// 004c9979  0bd0                 or edx, eax
// 004c997b  8916                 mov dword ptr [esi], edx
// 004c997d  894608               mov dword ptr [esi + 8], eax
// 004c9980  eb08                 jmp 0x4c998a
// 004c9982  3b4e04               cmp ecx, dword ptr [esi + 4]
// 004c9985  7503                 jne 0x4c998a
// 004c9987  894604               mov dword ptr [esi + 4], eax
// 004c998a  8b10                 mov edx, dword ptr [eax]
// 004c998c  83e201               and edx, 1
// 004c998f  0bd1                 or edx, ecx
// 004c9991  56                   push esi
// 004c9992  8910                 mov dword ptr [eax], edx
// 004c9994  50                   push eax
// 004c9995  897804               mov dword ptr [eax + 4], edi
// 004c9998  897808               mov dword ptr [eax + 8], edi
// 004c999b  e8d0ceffff           call 0x4c6870
// 004c99a0  83c408               add esp, 8
// 004c99a3  5f                   pop edi
// 004c99a4  5e                   pop esi
// 004c99a5  c3                   ret 

struct Node {
    unsigned int parentAndFlag;
    Node* left;
    Node* right;
};

void __cdecl func_004c6710(Node**);
void __cdecl func_004c6870(Node*, Node*);

void __cdecl func_004c9930(Node* value, Node* parent, Node* head)
{
    Node* p = parent;
    if (p->left != 0 && p->left != head) {
        func_004c6710(&parent);
        p = parent;
        p->right = value;
        if (p == head->right)
            head->right = value;
    } else {
        p->left = value;
        if (p == head) {
            head->parentAndFlag =
                (head->parentAndFlag & 1) | (unsigned int)value;
            head->right = value;
        } else if (p == head->left) {
            head->left = value;
        }
    }

    value->parentAndFlag =
        (value->parentAndFlag & 1) | (unsigned int)p;
    value->left = 0;
    value->right = 0;
    func_004c6870(value, head);
}
