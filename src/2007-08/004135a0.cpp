// from server: 51% by colin
struct S {
    char pad[0x21];
    char field21[0x101];
    char pad2[0x122 - 0x21 - 0x101 + 1];
    int count122;
    int count1238;
    int count1230;
    int count123c;
    int count1240;
    char field1a3[0x81];
    char field224[0x801];
    char fielda25[0x801];
    int method(int);
};

extern "C" int __stdcall sub_412a00(void*, int*, int, int);
extern "C" void __stdcall sub_412d60();
extern "C" int __stdcall sub_413190();

int S::method(int arg) {
    sub_412d60();
    int result = sub_413190();
    if ((arg & 5) != 0 && result != 0) {
        if (count122 > 0) {
            if (sub_412a00(field21, &count122, (int)field21, 0x81) == 0)
                return result;
            count122--;
        }
        if (count1238 > 0) {
            if (sub_412a00(field1a3, &count1238, (int)field1a3, 0x81) == 0)
                return result;
            count1238--;
        }
        if (count1230 > 0) {
            if (sub_412a00(field21, &count1230, (int)field21, 0x101) == 0)
                return result;
            count1230--;
        }
        if (count123c > 0) {
            if (sub_412a00(field224, &count123c, (int)field224, 0x801) == 0)
                return result;
            count123c--;
        }
        if (count1240 > 0) {
            if (sub_412a00(fielda25, &count1240, (int)fielda25, 0x801) == 0)
                return result;
            count1240--;
        }
    }
    return result;
}
