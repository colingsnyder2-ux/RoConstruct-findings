// from server: 80% by colin
// roc 2007-08 00535860  unit: std::logic_error  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535860
//
// 00535860  8b09                 mov ecx, dword ptr [ecx]
// 00535862  8b4108               mov eax, dword ptr [ecx + 8]
// 00535865  50                   push eax
// 00535866  b9642d8800           mov ecx, 0x882d64
// 0053586b  ff1508e77700         call dword ptr [0x77e708]
// 00535871  c3                   ret 

struct type_info
{
    bool operator==(const type_info&) const;

    bool f();
};

extern type_info G;

bool type_info::f()
{
    type_info* p = *(type_info**)this;
    const type_info* q = *(type_info**)((char*)p + 8);
    return G == *q;
}
