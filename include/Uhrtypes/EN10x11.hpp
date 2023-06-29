#pragma once

#include "Uhrtype.hpp"

/*
 *           Layout Front
 *                COL
 *       X 9 8 7 6 5 4 3 2 1 0
 * ROW + - - - - - - - - - - -
 *  0  | I T L I S A S A M P M
 *  1  | A C Q U A R T E R D C
 *  2  | T W E N T Y F I V E X
 *  3  | H A L F S T E N F T O
 *  4  | P A S T E R U N I N E
 *  5  | O N E S I X T H R E E
 *  6  | F O U R F I V E T W O
 *  7  | E I G H T E L E V E N
 *  8  | S E V E N T W E L V E
 *  9  | T E N S E O'C L O C K
 */

class En10x11_t : public iUhrType {
public:
    virtual LanguageAbbreviation usedLang() override {
        return LanguageAbbreviation::EN;
    };

    //------------------------------------------------------------------------------

    virtual const bool hasZwanzig() override { return true; }

    //------------------------------------------------------------------------------

    virtual const bool hasTwentyfive() override { return true; }

    //------------------------------------------------------------------------------

    void show(FrontWord word) override {
        switch (word) {

        case FrontWord::es_ist:
            // It
            setFrontMatrixWord(0, 9, 10);
            setFrontMatrixWord(0, 6, 7);
            break;

        case FrontWord::h_ein:
            // One
            setFrontMatrixWord(5, 8, 10);
            break;

        case FrontWord::h_zwei:
            // Two
            setFrontMatrixWord(6, 0, 2);
            break;

        case FrontWord::h_drei:
            // Three
            setFrontMatrixWord(5, 0, 4);
            break;

        case FrontWord::h_vier:
            // Four
            setFrontMatrixWord(6, 7, 10);
            break;

        case FrontWord::h_fuenf:
            // Five
            setFrontMatrixWord(6, 3, 6);
            break;

        case FrontWord::h_sechs:
            // Six
            setFrontMatrixWord(5, 5, 7);
            break;

        case FrontWord::h_sieben:
            // Seven
            setFrontMatrixWord(8, 6, 10);
            break;

        case FrontWord::h_acht:
            // Eight
            setFrontMatrixWord(7, 6, 10);
            break;

        case FrontWord::h_neun:
            // Nine
            setFrontMatrixWord(4, 0, 3);
            break;

        case FrontWord::h_zehn:
            // Ten
            setFrontMatrixWord(9, 8, 10);
            break;

        case FrontWord::h_elf:
            // Eleven
            setFrontMatrixWord(7, 0, 5);
            break;

        case FrontWord::h_zwoelf:
            // Twelve
            setFrontMatrixWord(8, 0, 5);
            break;

        case FrontWord::fuenf:
            // Five
            setFrontMatrixWord(2, 1, 4);
            break;

        case FrontWord::zehn:
            // Ten
            setFrontMatrixWord(3, 3, 5);
            break;

        case FrontWord::a_quarter:
            // A Quater
            setFrontMatrixWord(1, 2, 9);
            break;

        case FrontWord::viertel:
            // Quater
            setFrontMatrixWord(1, 2, 8);
            break;

        case FrontWord::zwanzig:
            // Twenty
            setFrontMatrixWord(2, 5, 10);
            break;

        case FrontWord::twentyfive:
            // Twentyfive
            setFrontMatrixWord(2, 1, 10);
            break;

        case FrontWord::halb:
            // Half
            setFrontMatrixWord(3, 7, 10);
            break;

        case FrontWord::nach:
        case FrontWord::v_nach:
            // Past
            setFrontMatrixWord(4, 7, 10);
            break;

        case FrontWord::vor:
        case FrontWord::v_vor:
            // To
            setFrontMatrixWord(3, 0, 1);
            break;

        case FrontWord::uhr:
            // O'Clock
            setFrontMatrixWord(9, 0, 5);
            break;

        default:
            break;
        };
    };
};

En10x11_t _en10x11;