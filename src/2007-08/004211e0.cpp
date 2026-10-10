// from server: 42% by colin
extern "C" {
    int __stdcall ClientToScreen(void*, void*);
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
}

struct CSelectionTreeCtrl {
    char pad[0x20];
    void* hwnd;
    char pad2[0xc8];
    int field_ec;
    char pad3[0x54];

    int func_004211e0(int a, int b, int c);
};

extern "C" int __stdcall sub_62ff02(int);
extern "C" int __stdcall sub_6304b4();
extern "C" int __stdcall sub_6669d0(int, int, int);
extern "C" int __stdcall sub_41f450(int);
extern "C" int __stdcall sub_41f580(int);
extern "C" int __stdcall sub_4210e0(int);

int CSelectionTreeCtrl::func_004211e0(int a, int b, int c)
{
    int pt[2];
    int result;
    int v;

    if (this->field_ec != 0)
    {
        pt[0] = a;
        pt[1] = b;
        ClientToScreen(this->hwnd, pt);
        v = sub_62ff02(pt[0]);
        v = *(int*)(v + 0x94);
        v = *(int*)v;
        sub_41f450(v);
        result = sub_6304b4();
        if (result != 0)
        {
            if ((pt[0] & 0x46) != 0)
            {
                result = sub_4210e0(result);
            }
            else
            {
                result = 0;
            }
        }
        v = sub_62ff02(0);
        v = *(int*)(v + 0x94);
        v = *(int*)v;
        sub_41f580(v);
        SendMessageA(this->hwnd, 0x110b, 8, result);
        v = sub_62ff02(1);
        v = *(int*)(v + 0x94);
        v = *(int*)v;
        sub_41f580(v);
    }
    return sub_6669d0(a, b, c);
}
