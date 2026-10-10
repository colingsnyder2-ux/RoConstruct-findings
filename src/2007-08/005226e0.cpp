// from server: 45% by colin
// roc 2007-08 005226e0  unit: seg_00520000  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005226e0

extern "C" int __stdcall sub_51E8E0(int, const char*);
extern "C" int __stdcall sub_51E990(int, const char*);
extern "C" int __stdcall sub_51EC80(int, int);
extern "C" int __stdcall sub_51ECD0(int, int);
extern "C" int __stdcall sub_51ED00(int, int);
extern "C" int __stdcall sub_520680(const char*);
extern "C" int __stdcall sub_5206A0(int, int, int);
extern "C" int __stdcall sub_521750(int, int);
extern "C" int __stdcall sub_514A60(int, int, int, int);

struct Seg00520000 {
    int field_68;
    int method_005226e0(int a, int b);
};

int Seg00520000::method_005226e0(int a, int b)
{
    int v8;
    int v10;
    int v14;
    int v18;
    int v1c;
    int v20;
    int v24;
    int v28;
    int v2c;
    int v30;
    int v34;
    int v38;
    int v3c;
    int v40;
    int v44;
    int v48;

    v8 = (int)this;
    if ((*(unsigned char*)(v8 + 0x68) & 1) == 0) {
        if ((*(unsigned char*)(v8 + 0x68) & 4) != 0) {
            sub_51E990(v8, (const char*)0x7A3DB0);
            sub_521750(v8, a);
            return 0;
        }
        sub_51E8E0(v8, (const char*)0x7A3DC8);
        v14 = b;
        v18 = sub_51EC80(v8, v14 + 1);
        sub_5206A0(v8, v18, v14);
        if (sub_521750(v8, 0) != 0) {
            sub_51ECD0(v8, v18);
            return 0;
        }
        *(unsigned char*)(v18 + v14) = 0;
        v1c = v18;
        while (*(unsigned char*)v1c != 0) {
            v1c++;
        }
        v1c++;
        if (v1c > v18 + v14) {
            sub_51ECD0(v8, v18);
            sub_51E990(v8, (const char*)0x7A3D98);
            return 0;
        }
        v20 = *(unsigned char*)v1c;
        v1c++;
        v24 = (v20 == 8) ? 0 : 1;
        v28 = v18 + v14 - v1c;
        v2c = v28 / (v24 * 4 + 6);
        if (v28 % (v24 * 4 + 6) != 0) {
            sub_51ECD0(v8, v18);
            sub_51E990(v8, (const char*)0x7A3D7C);
            return 0;
        }
        if (v2c > 0x19999999) {
            sub_51E990(v8, (const char*)0x7A3D68);
            return 0;
        }
        v30 = sub_51ED00(v8, v2c * 10);
        if (v30 == 0) {
            sub_51E990(v8, (const char*)0x7A3D44);
            return 0;
        }
        v34 = 0;
        v38 = 0;
        while (v34 < v2c) {
            v3c = v30 + v38;
            if (v20 == 8) {
                *(unsigned short*)(v3c + 0) = *(unsigned char*)v1c;
                v1c++;
                *(unsigned short*)(v3c + 2) = *(unsigned char*)v1c;
                v1c++;
                *(unsigned short*)(v3c + 4) = *(unsigned char*)v1c;
                v1c++;
                *(unsigned short*)(v3c + 6) = *(unsigned char*)v1c;
                v1c++;
            } else {
                *(unsigned short*)(v3c + 0) = sub_520680((const char*)v1c);
                v1c += 2;
                *(unsigned short*)(v3c + 2) = sub_520680((const char*)v1c);
                v1c += 2;
                *(unsigned short*)(v3c + 4) = sub_520680((const char*)v1c);
                v1c += 2;
                *(unsigned short*)(v3c + 6) = sub_520680((const char*)v1c);
                v1c += 2;
            }
            *(unsigned short*)(v3c + 8) = sub_520680((const char*)v1c);
            v1c += 2;
            v34++;
            v38 += 10;
        }
        v40 = v8;
        v44 = b;
        v48 = v2c;
        sub_514A60(v40, v44, (int)&v48, 1);
        sub_51ECD0(v8, v18);
        sub_51ECD0(v8, v30);
        return 0;
    }
    return 0;
}
