// from server: 33% by colin
extern "C" {
    __declspec(dllimport) int __stdcall GetClipboardFormatNameA(unsigned int, char*, int);
}

struct CXTPImageEditorPicture {
    char pad[0x54];
    int field_54;
    int field_58;
    char pad2[0x1c];
    int field_78;
    int field_7c;
    void func_006f36f0();
    void func_006f3b60();
};

extern void func_0073858c(void*);
extern int func_00738586(void*);
extern int func_0073857a(void*, int, int);
extern int func_00738736(void*, int, void*, int);
extern void func_00738c82(void*);
extern int func_00738c7c(void*, void*);
extern void func_0073843c(void*);
extern void func_00738568(void*);
extern void func_0041f680(void*);
extern void func_0064dfd0();
extern void func_00630238(void*, int);
extern void* func_0062fef6(int);
extern void* func_00668f70();
extern void* func_00668770(void*, int);
extern void func_006f1590(void*, void*, int, int, int, int, int, int, int);

extern unsigned short g_8c86e8;
extern void* g_77ec60;
extern void* g_77ddb8;
extern void* g_77ddbc;
extern void* g_77df20;

void CXTPImageEditorPicture::func_006f3b60()
{
    char buf[0x30];
    int local_28;
    int local_1c;
    int local_18;
    int local_20;
    char local_40[2];
    int local_10;

    func_0073858c(buf);
    local_1c = 0;
    local_18 = 0x7db274;
    local_20 = 0;
    if (func_00738586(buf) == 0) {
        func_00738568(buf);
        return;
    }
    if (func_0073857a(buf, 2, 0) == 0) {
        func_00738568(buf);
        return;
    }
    if (func_00738736(buf, 2, &local_28, 0) == 0 || local_28 == 0) {
        func_00738568(buf);
        return;
    }
    func_00738c82(buf);
    while (func_00738c7c(buf, local_40) != 0) {
        unsigned short fmt = *(unsigned short*)local_40;
        if (GetClipboardFormatNameA(fmt, (char*)0x8c9648, 0xfe) != 0) {
            ((void (__stdcall*)(char*))g_77ddb8)((char*)0x8c9648);
            int r = ((int (__stdcall*)(void*, char*, int))g_77df20)(&local_10, (char*)0x7dba20, 0);
            if (r > 0) {
                ((void (__stdcall*)(void*))g_77ddbc)(&local_10);
                local_20 = 1;
                break;
            }
            ((void (__stdcall*)(void*))g_77ddbc)(&local_10);
        }
    }
    func_0064dfd0();
    func_0073857a(buf, g_8c86e8, 0);
    local_20 = (int)func_0073857a(buf, g_8c86e8, 0);
    func_00630238(&local_1c, local_28);
    field_78 = field_7c;
    void* p = func_0062fef6(0xc);
    if (p != 0) {
        *(int*)((char*)p + 4) = 0;
        *(int*)p = 0x7db274;
        *(int*)((char*)p + 8) = 0;
    } else {
        p = 0;
    }
    field_7c = (int)p;
    void* q = func_00668f70();
    void* r2 = func_00668770(q, 0xf);
    int zero1 = 0;
    int zero2 = 0;
    func_006f1590((void*)field_7c, &local_1c, field_54, field_58, 0xfffeff, 0, zero1, zero2, 0);
    func_0073843c(&local_18);
    func_006f36f0();
    func_0041f680(&local_18);
    func_00738568(buf);
}
