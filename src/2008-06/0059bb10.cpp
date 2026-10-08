// from server: 85% by colin
// roc 2008-06 0059bb10  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059bb10
//
// 0059bb10  8d8114fcffff         lea eax, [ecx - 0x3ec]
// 0059bb16  c3                   ret 

struct G3D {
    struct VVector3 {
        struct TypedPropertyDescriptor {
            int f() const;
        };
    };
};

int G3D::VVector3::TypedPropertyDescriptor::f() const {
    return *(int*)((char*)this - 0x3ec);
}
