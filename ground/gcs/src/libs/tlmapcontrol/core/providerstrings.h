/**
******************************************************************************
*
* @file       providerstrings.h
* @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2012.
* @author     Tau Labs, http://taulabs.org, Copyright (C) 2013
* @brief      
* @see        The GNU Public License (GPL) Version 3
* @defgroup   TLMapWidget
* @{
* 
*****************************************************************************/
/* 
* This program is free software; you can redistribute it and/or modify 
* it under the terms of the GNU General Public License as published by 
* the Free Software Foundation; either version 3 of the License, or 
* (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful, but 
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
* for more details.
* 
* You should have received a copy of the GNU General Public License along 
* with this program; if not, see <http://www.gnu.org/licenses/>
*/
#ifndef PROVIDERSTRINGS_H
#define PROVIDERSTRINGS_H

#include <QString>
#include <QVector>

namespace core {
    class ProviderStrings
    {
    public:
        ProviderStrings();
        static const QString levelsForSigPacSpainMap[];
        // Google version strings
        QString VersionGoogleMap;
        QString VersionGoogleSatellite;
        QString VersionGoogleLabels;
        QString VersionGoogleTerrain;
        QString SecGoogleWord;

        // Google (China) version strings
        QString VersionGoogleMapChina;
        QString VersionGoogleSatelliteChina;
        QString VersionGoogleLabelsChina;
        QString VersionGoogleTerrainChina;

        // Google (Korea) version strings
        QString VersionGoogleMapKorea;
        QString VersionGoogleSatelliteKorea;
        QString VersionGoogleLabelsKorea;

        /// <summary>
        /// Google Maps API generated using http://greatmaps.codeplex.com/
        /// from http://code.google.com/intl/en-us/apis/maps/signup.html
        /// </summary>


        // Yahoo version strings
        QString VersionYahooMap;
        QString VersionYahooSatellite;
        QString VersionYahooLabels;

        // BingMaps
        QString VersionBingMaps;

        // YandexMap
        QString VersionYandexMap;



        /// <summary>
        /// Bing Maps Customer Identification, more info here
        /// http://msdn.microsoft.com/en-us/library/bb924353.aspx
        /// </summary>
        QString BingMapsClientToken;

        QVector<char> cryptKeyVector;
        QString gAPIUrl;
        QString gMapRegex;
        QString gLabRegex;
        QString gTerRegex;
        QString gSatRegex;
        QString encrypt(QString str);
        QString decrypt(QString str);
    };

}
#endif // PROVIDERSTRINGS_H
