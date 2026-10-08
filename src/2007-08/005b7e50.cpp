// from server: 57% by colin
// roc 2007-08 005b7e50  unit: seg_005b0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7e50

struct SurfaceDescriptor;

struct SurfaceDescriptorHolder {
    SurfaceDescriptor* get();
};

struct SurfaceDescriptor {
    void assign(const void* a, const void* b);
};

extern "C" SurfaceDescriptorHolder* __cdecl sub_573890(SurfaceDescriptorHolder* p);

void __cdecl sub_5b7e50(SurfaceDescriptorHolder* a, const void* b, const void* c)
{
    SurfaceDescriptorHolder* h;
    if (a) {
        h = (SurfaceDescriptorHolder*)((char*)a - 4);
    } else {
        h = 0;
    }
    SurfaceDescriptor* sd = sub_573890(h)->get();
    sd->assign(b, c);
}
