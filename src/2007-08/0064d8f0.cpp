// from server: 41% by colin
struct CXTPImageManager {
    char pad[0x24];
    int field24;
    char pad2[0x54 - 0x28];
    int field54;
    int AddImage(int a, int b, int c, int d);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __cdecl sub_64B2C0(void* out, void* in);
extern "C" void __cdecl sub_6485E0(void* dst, void* src);
extern "C" void __cdecl sub_6496A0(void* p);
extern "C" void __cdecl sub_64C590(void* p, int a, int b);
extern "C" void __cdecl sub_64CF10(void* p);
extern "C" void* __cdecl sub_6353A0(void* p, int a);

int CXTPImageManager::AddImage(int a, int b, int c, int d)
{
    char local1[0x10];
    char local2[0x10];
    void* p;
    int result;

    sub_64B2C0(local1, &a);
    field54++;
    p = sub_62FEF6(0x44);
    if (p != 0) {
        sub_64C590(p, field54, (int)this);
        result = (int)p;
    } else {
        result = 0;
    }
    sub_6485E0(local2, local1);
    sub_64CF10((void*)result);
    *(int*)sub_6353A0(&field24, field54) = result;
    sub_6496A0(local1);
    return field54;
}
