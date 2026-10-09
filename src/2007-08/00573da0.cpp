// from server: 61% by colin
// roc 2007-08 00573da0  unit: RBX::VPartInstance::?$FactoryProduct  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573da0
//
// 00573da0  53                   push ebx
// 00573da1  56                   push esi
// 00573da2  57                   push edi
// 00573da3  33ff                 xor edi, edi
// 00573da5  8d99a4010000         lea ebx, [ecx + 0x1a4]
// 00573dab  eb03                 jmp 0x573db0
// 00573dad  8d4900               lea ecx, [ecx]
// 00573db0  57                   push edi
// 00573db1  8bcb                 mov ecx, ebx
// 00573db3  e8f82e0400           call 0x5b6cb0
// 00573db8  8bf0                 mov esi, eax
// 00573dba  8bce                 mov ecx, esi
// 00573dbc  e85f530400           call 0x5b9120
// 00573dc1  83f806               cmp eax, 6
// 00573dc4  7426                 je 0x573dec
// 00573dc6  8bce                 mov ecx, esi
// 00573dc8  e853530400           call 0x5b9120
// 00573dcd  83f808               cmp eax, 8
// 00573dd0  741a                 je 0x573dec
// 00573dd2  8bce                 mov ecx, esi
// 00573dd4  e847530400           call 0x5b9120
// 00573dd9  83f807               cmp eax, 7
// 00573ddc  740e                 je 0x573dec
// 00573dde  83c701               add edi, 1
// 00573de1  83ff06               cmp edi, 6
// 00573de4  7cca                 jl 0x573db0
// 00573de6  5f                   pop edi
// 00573de7  5e                   pop esi
// 00573de8  32c0                 xor al, al
// 00573dea  5b                   pop ebx
// 00573deb  c3                   ret 
// 00573dec  5f                   pop edi
// 00573ded  5e                   pop esi
// 00573dee  b001                 mov al, 1
// 00573df0  5b                   pop ebx
// 00573df1  c3                   ret 

struct VPartInstance_FactoryProduct {
    bool m();
};

struct Sub {
    int getType();
};

struct Container {
    Sub* at(int index);
};

bool VPartInstance_FactoryProduct::m()
{
    Container* c = (Container*)((char*)this + 0x1a4);
    for (int i = 0; i < 6; ++i) {
        Sub* s = c->at(i);
        int t = s->getType();
        if (t == 6 || t == 8 || t == 7)
            return true;
    }
    return false;
}
