class area{
    public:
        area(int tipo, int base, int techo, int altura, int diagonal_1, int diagonal_2);
        ~area();

        int tipo, base, techo, altura, diagonal_1, diagonal_2;
        int tipo();
        void datos();
        int calculo_area();
};
