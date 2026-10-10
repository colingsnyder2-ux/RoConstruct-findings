// from server: 70% by colin
struct Instance;

struct InstanceArray {
    Instance** begin;
    Instance** end;
};

struct RootInstance {
    void insertInstances(const InstanceArray& instances, int mode);
    void insertRaw(const InstanceArray& instances, int mode);
    void insert3dView(const InstanceArray& instances, int mode);
};

extern "C" void __stdcall invalid_parameter_noinfo();
extern "C" int __cdecl sub_630D36(int, int, int, int, int);
extern "C" int __cdecl sub_495820(void*);
extern "C" int __cdecl sub_4887E0(void*);
extern "C" int __cdecl sub_541630(void*, int);

void RootInstance::insertInstances(const InstanceArray& instances, int mode)
{
    if (instances.begin != 0) {
        int count = (int)(instances.end - instances.begin) >> 3;
        if (count != 1) {
            if (count <= 0)
                invalid_parameter_noinfo();
            Instance* first = *instances.begin;
            if (sub_630D36(0, 0x89f650, 0x881f4c, 0, (int)first) != 0) {
                int r = sub_495820(this);
                if (r != 0) {
                    int r2 = sub_4887E0((void*)r);
                    sub_541630(first, r2);
                    return;
                }
            }
        }
    }
    insertRaw(instances, mode);
    insert3dView(instances, mode);
}
