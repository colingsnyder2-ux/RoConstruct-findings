// from server: 76% by king_originala
struct Vec3i {
    int x, y, z;
};

namespace RBX {
    class MotorJoint {
        char pad[0xa8];
        bool a, b, c;
    public:
        int isActive() const;
    };
}

extern int levelCount;
extern int baseSize;
extern int sizeLimit;

extern void __cdecl calculateBounds(int, const void *, Vec3i *, Vec3i *);

void __cdecl selectLevel(int *level, const RBX::MotorJoint *joint,
                        const void *input, Vec3i *minimum, Vec3i *maximum)
{
    *level = 0;
    calculateBounds(0, input, minimum, maximum);

    int dz = maximum->z - minimum->z;
    int dy = maximum->y - minimum->y;
    int dx = maximum->x - minimum->x;
    int volume = (dz + 1) * (dy + 1) * (dx + 1);

    while (volume > 100) {
        int current = *level;
        if (current >= levelCount - 1)
            break;

        if ((unsigned char)joint->isActive() &&
            (double)(baseSize << current) == (double)sizeLimit)
            break;

        ++current;
        *level = current;
        calculateBounds(current, input, minimum, maximum);

        dz = maximum->z - minimum->z;
        dy = maximum->y - minimum->y;
        dx = maximum->x - minimum->x;
        volume = (dz + 1) * (dy + 1) * (dx + 1);
    }
}
