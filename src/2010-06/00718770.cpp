// roc 2010-06 00718770  unit: RBX::BlockBlockContact  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00718770
//
// 00718770  8b4104               mov eax, dword ptr [ecx + 4]
// 00718773  8b09                 mov ecx, dword ptr [ecx]
// 00718775  8b9168010000         mov edx, dword ptr [ecx + 0x168]
// 0071877b  8b84820c010000       mov eax, dword ptr [edx + eax*4 + 0x10c]
// 00718782  c3                   ret 
// copied from an identical function in another client (function ?get@NonFactoryProduct@ns_ROCX000014@@QAEHXZ)

namespace ns_ROCX000014 {
struct NonFactoryProduct
{
    int get();
};

int NonFactoryProduct::get()
{
    int index = *(int *)((char *)this + 4);
    int **object = *(int ***)this;
    int *table = *(int **)((char *)object + 0x168);
    return table[index + 0x10c / 4];
}
}
