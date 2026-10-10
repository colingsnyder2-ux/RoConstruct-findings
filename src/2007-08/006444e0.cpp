// from server: 58% by colin
extern "C" {
    int __stdcall GetMenuItemCount(void*);
    unsigned int __stdcall GetMenuItemID(void*, int);
    int __stdcall GetMenuItemInfoA(void*, unsigned int, int, void*);
}

struct CXTPCommandBar {
    int ProcessCommandBar(void*);
};

struct CXTPSomething {
    void* vtable;
    void* field4;
};

int CXTPCommandBar::ProcessCommandBar(void* param) {
    if (param == 0) {
        return 0;
    }

    void* hmenu = *(void**)((char*)param + 4);
    int count = GetMenuItemCount(hmenu);
    int result = 0;

    for (int i = 0; i < count; i++) {
        char info[0x2c];
        *(int*)(info + 0) = 0x2c;
        *(int*)(info + 4) = 0x11;

        GetMenuItemInfoA(hmenu, i, 1, info);

        if ((*(unsigned int*)(info + 8) & 0x800) != 0) {
            result = 1;
            continue;
        }

        unsigned int id = GetMenuItemID(hmenu, i);
        if (id == 0) {
            result = 1;
            continue;
        }

        void* obj = (void*)0x67bf80;
        // call 0x67bf80 with (this, param, i)
        // This is a helper that returns a pointer
        // We'll declare it as a function pointer
        typedef void* (__thiscall *FuncType)(void*, void*, int);
        FuncType func = (FuncType)0x67bf80;
        void* item = func(*(void**)(info + 0), param, i);

        if (item == 0) {
            continue;
        }

        if ((*(unsigned char*)(info + 8) & 0x60) != 0) {
            // call 0x63a130 with ecx=item
            typedef int (__thiscall *FuncType2)(void*);
            FuncType2 func2 = (FuncType2)0x63a130;
            int val = func2(item);
            val |= 0x80;
            // call 0x63a120 with ecx=item, arg=val
            typedef void (__thiscall *FuncType3)(void*, int);
            FuncType3 func3 = (FuncType3)0x63a120;
            func3(item, val);

            unsigned int flags = *(unsigned int*)(info + 8);
            void** vtable = *(void***)item;
            typedef void (__thiscall *FuncType4)(void*, int);
            FuncType4 func4 = (FuncType4)vtable[0x64/4];
            func4(item, (flags >> 5) & 1);
        }

        if (result != 0) {
            void** vtable = *(void***)item;
            typedef void (__thiscall *FuncType5)(void*, int);
            FuncType5 func5 = (FuncType5)vtable[0x64/4];
            func5(item, 1);
            result = 0;
        }

        if (*(int*)((char*)item + 0x158) != 0) {
            continue;
        }

        if ((*(unsigned char*)(info + 8) & 8) != 0) {
            if (*(int*)((char*)item + 0xa0) != 1) {
                *(int*)((char*)item + 0xa0) = 1;
                typedef void (__thiscall *FuncType6)(void*, int);
                FuncType6 func6 = (FuncType6)0x63a690;
                func6(item, 1);
            }
        }

        if (*(int*)((char*)item + 0x158) != 0) {
            continue;
        }

        if ((*(unsigned char*)(info + 8) & 3) != 0) {
            void** vtable = *(void***)item;
            typedef void (__thiscall *FuncType7)(void*, int);
            FuncType7 func7 = (FuncType7)vtable[0x68/4];
            func7(item, 0);
        }
    }

    return 1;
}
