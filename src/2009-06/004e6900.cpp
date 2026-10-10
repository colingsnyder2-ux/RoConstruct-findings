// from server: 83% by why2
struct ChangePropertyItem {
    int field0;
    int field4;
};

int __cdecl sub_004e6900(ChangePropertyItem* item) {
    int (*fn)(int) = (int (*)(int))item->field4;
    int result = fn(item->field0);
    return *(int*)result;
}
